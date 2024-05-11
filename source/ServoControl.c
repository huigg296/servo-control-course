/*
 * Copyright (c) 2013 - 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "stdio.h"
#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "peripherals.h"
#include "fsl_common.h"
#include "fsl_adc16.h"
#include "fsl_pit.h"
#include "fsl_dac.h"
#include "Lab_pwm.h"
#include "pid.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define RESET	0
#define SET		1

uint32_t msCounter=0;

adc16_channel_config_t ADC_channelsConfig[1] = {
  {
    .channelNumber = 0U,
    .enableDifferentialConversion = true,
    .enableInterruptOnConversionCompleted = false,
  }
};


/*******************************************************************************
 * Prototypes
 ******************************************************************************/
float V_ctrl = 0;
extern PID_Parameter* motor_PIDInfo;

/*******************************************************************************
 * Code
 ******************************************************************************/
void delay()
{
	uint32_t delay_count=800000;
	
	while(--delay_count);
}

/*!
 * @brief Main function
 */
int main(void)
{
    /*************************** 初始化 ***************************/
    adc16_channel_config_t adc16ChannelConfigStruct;
	int16_t Vin;
        uint16_t Vout;
	
	uint16_t counter;
	uint8_t dc0, dc1, dc2, dc3;

	// variables for Quadrature Encoder Switch (QES)
	uint8_t state_pha, state_phb;
	uint8_t state_pha_t, state_phb_t;
	uint16_t QES_value=0, QES_value_t;
	
    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
	BOARD_InitPeripherals();
	
	//lab_pit_init();
    
//    printf("Hello World!");

    // ADC配置
	adc16ChannelConfigStruct.channelNumber                        = 0U;
    adc16ChannelConfigStruct.enableInterruptOnConversionCompleted = false;
    adc16ChannelConfigStruct.enableDifferentialConversion = true;

    // 旋转编码器状态
	state_pha = PHA();			state_phb = PHB(); // 读取旋转编码器状态
	state_pha_t = state_pha;	state_phb_t = state_phb; // 上一次旋转编码器状态
	QES_value_t = QES_value; // 编码器值

    /*************************** 主循环 ***************************/
    while (1)
    {
        /*************************** 开环控制测试 ***************************/
        if (S4()) {
            LED_OFF();
            state_pha = PHA();
            state_phb = PHB();

            // 编码开关控制数值变化，数值范围0~99
            if ((state_pha_t != state_pha) || (state_phb_t != state_phb)) {
                if (state_phb_t == state_phb) {
                    if (SET == state_phb) {
                        if (RESET == state_pha) QES_value++;
                        else if (QES_value > 0) QES_value--;
                    } else {
                        if (SET == state_pha) QES_value++;
                        else if (QES_value > 0) QES_value--;
                    }
                } else {
                    if (SET == state_pha) {
                        if (SET == state_phb) QES_value++;
                        else if (QES_value > 0) QES_value--;
                    } else {
                        if (RESET == state_pha) QES_value++;
                        else if (QES_value > 0) QES_value--;
                    }
                }

                state_pha_t = state_pha;
                state_phb_t = state_phb;
                //delay_1ms(10);		// de-jitter
            }

            // 如果编码器数值发生变化，更新PWM输出
            if (QES_value > 99)
                QES_value = 99;
            if (QES_value_t != QES_value) {
                lab_pwm_set(QES_value, 100 - QES_value, QES_value, 100 - QES_value);
                QES_value_t = QES_value;
            }
        }
        /*************************** 闭环控制 ***************************/
        // 读取ADC数值，即板子上的Ve
        ADC16_SetChannelConfig(ADC0, ADC0_CH0_CONTROL_GROUP, &adc16ChannelConfigStruct);
        while (0U == (kADC16_ChannelConversionDoneFlag &
                      ADC16_GetChannelStatusFlags(ADC0, ADC0_CH0_CONTROL_GROUP)))
        {
        }
		Vin = ADC16_GetChannelConversionValue(ADC0, ADC0_CH0_CONTROL_GROUP);
		// printf("Vin = %d\n\r", Vin);

        Vout = (Vin+32767)>>4;
        DAC_SetBufferValue(DAC0_PERIPHERAL, 0U, Vout);

        if (!S4()) {
            LED_ON();
            // 控制器：PID控制
            motor_PIDInfo->input = Vin;
            V_ctrl = PIDCalc(0, motor_PIDInfo); // TODO:测试控制量获取

            // 执行器：PWM输出

        }

        /*************************** 开发板正常运行测试 ***************************/
        if (!S5())
        	BUZZ_ON();
        else
        	BUZZ_OFF();
		
//		DAC_SetBufferValue(DAC0, 0U, dacValue);
      
    }
}

// 1s周期中断
void PIT_CHANNEL_0_IRQHANDLER(void)
{
	uint32_t intStatus;
	/* Reading all interrupt flags of status register */
	intStatus = PIT_GetStatusFlags(PIT_PERIPHERAL, PIT_CHANNEL_0);
	PIT_ClearStatusFlags(PIT_PERIPHERAL, PIT_CHANNEL_0, intStatus);

	/* Place your code here */
	//LED_TOGGLE();

	/* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F
	 Store immediate overlapping exception return operation might vector to incorrect interrupt. */
	#if defined __CORTEX_M && (__CORTEX_M == 4U)
		__DSB();
	#endif
}

// 1ms周期中断
/* PIT1_IRQn interrupt handler */
void PIT_CHANNEL_1_IRQHANDLER(void) {
	uint32_t intStatus;
	/* Reading all interrupt flags of status register */
	intStatus = PIT_GetStatusFlags(PIT_PERIPHERAL, PIT_CHANNEL_1);
	PIT_ClearStatusFlags(PIT_PERIPHERAL, PIT_CHANNEL_1, intStatus);

	/* Place your code here */
	msCounter++;

	/* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F
	 Store immediate overlapping exception return operation might vector to incorrect interrupt. */
	#if defined __CORTEX_M && (__CORTEX_M == 4U)
		__DSB();
	#endif
}
