/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v15.0
processor: MKV30F64xxx10
package_id: MKV30F64VLF10
mcu_data: ksdk2_0
processor_version: 15.0.1
pin_labels:
- {pin_num: '21', pin_signal: PTA4/LLWU_P3/FTM0_CH1/FTM0_FLT3/NMI_b, label: S2, identifier: S2}
- {pin_num: '29', pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/FTM0_FLT1/FTM0_FLT3, label: S8, identifier: S8}
- {pin_num: '30', pin_signal: ADC0_SE13/PTB3/I2C0_SDA/UART0_CTS_b/FTM0_FLT0, label: S3, identifier: S3}
- {pin_num: '31', pin_signal: PTB16/UART0_RX/FTM_CLKIN0/EWM_IN, label: S7, identifier: S7}
- {pin_num: '32', pin_signal: PTB17/UART0_TX/FTM_CLKIN1/EWM_OUT_b, label: BUZZ, identifier: BUZZ}
- {pin_num: '33', pin_signal: ADC0_SE14/PTC0/SPI0_PCS4/PDB0_EXTRG/CMP0_OUT/FTM0_FLT1/SPI0_PCS0, label: LED, identifier: LED}
- {pin_num: '34', pin_signal: ADC0_SE15/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FTM2_CH0, label: IS2, identifier: IS2}
- {pin_num: '35', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FTM2_CH1, label: S9, identifier: S9}
- {pin_num: '36', pin_signal: CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT, label: UART1_RX, identifier: UART1_RX}
- {pin_num: '37', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/CMP1_OUT, label: UART1_TX, identifier: UART1_TX}
- {pin_num: '38', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT/FTM0_CH2, label: EN2, identifier: EN2}
- {pin_num: '39', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/UART0_RX/I2C0_SCL, label: IS1, identifier: IS1}
- {pin_num: '40', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/UART0_TX/I2C0_SDA, label: EN1, identifier: EN1}
- {pin_num: '41', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART0_RTS_b/FTM0_CH0/UART1_RX, label: PWM0, identifier: PWM1;PWM0}
- {pin_num: '42', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART0_CTS_b/FTM0_CH1/UART1_TX, label: PWM1, identifier: PWM2;PWM1}
- {pin_num: '43', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART0_RX/FTM0_CH2/I2C0_SCL, label: PWM2, identifier: PWM3;PWM2}
- {pin_num: '44', pin_signal: PTD3/SPI0_SIN/UART0_TX/FTM0_CH3/I2C0_SDA, label: PWM3, identifier: PWM4;PWM3}
- {pin_num: '45', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FTM2_CH0/EWM_IN, label: PHB, identifier: PHB}
- {pin_num: '27', pin_signal: ADC0_SE8/ADC1_SE8/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/FTM1_QD_PHA/UART0_RX, label: PHA1, identifier: PHA1}
- {pin_num: '28', pin_signal: ADC0_SE9/ADC1_SE9/PTB1/I2C0_SDA/FTM1_CH1/FTM0_FLT2/EWM_IN/FTM1_QD_PHB/UART0_TX, label: PHB1, identifier: PHB1}
- {pin_num: '46', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FTM2_CH1/EWM_OUT_b, label: PHA, identifier: PHA}
- {pin_num: '47', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH0/FTM1_CH0/FTM0_FLT0, label: PUSH, identifier: PUSH}
- {pin_num: '48', pin_signal: PTD7/UART0_TX/FTM0_CH1/FTM1_CH1/FTM0_FLT1, label: S5, identifier: S5}
- {pin_num: '3', pin_signal: ADC0_SE4a/ADC0_DP1/ADC1_DP2/PTE16/SPI0_PCS0/UART1_TX/FTM_CLKIN0/FTM0_FLT3, label: PE16, identifier: PE16}
- {pin_num: '4', pin_signal: ADC0_SE5a/ADC0_DM1/ADC1_DM2/PTE17/SPI0_SCK/UART1_RX/FTM_CLKIN1/LPTMR0_ALT3, label: PE17, identifier: PE17}
- {pin_num: '5', pin_signal: ADC0_SE6a/ADC1_DP1/ADC0_DP2/PTE18/SPI0_SOUT/UART1_CTS_b/I2C0_SDA, label: PE18, identifier: PE18}
- {pin_num: '6', pin_signal: ADC0_SE7a/ADC1_DM1/ADC0_DM2/PTE19/SPI0_SIN/UART1_RTS_b/I2C0_SCL, label: PE19, identifier: PE19}
- {pin_num: '15', pin_signal: ADC0_SE17/PTE24/FTM0_CH0/I2C0_SCL/EWM_OUT_b, label: PE24, identifier: PE24}
- {pin_num: '16', pin_signal: ADC0_SE18/PTE25/FTM0_CH1/I2C0_SDA/EWM_IN, label: S4, identifier: S4}
- {pin_num: '7', pin_signal: ADC0_DP0/ADC1_DP3, label: ADCDP, identifier: ADCDP}
- {pin_num: '8', pin_signal: ADC0_DM0/ADC1_DM3, label: ADCDM, identifier: ADCDM}
- {pin_num: '13', pin_signal: VREF_OUT/CMP1_IN5/CMP0_IN5/ADC1_SE18, label: VREF, identifier: VREF}
- {pin_num: '14', pin_signal: DAC0_OUT/CMP1_IN3/ADC0_SE23, label: VOUT, identifier: VOUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '17', peripheral: JTAG, signal: JTAG_TCLK_SWD_CLK, pin_signal: PTA0/UART0_CTS_b/FTM0_CH5/EWM_IN/JTAG_TCLK/SWD_CLK}
  - {pin_num: '18', peripheral: n/a, signal: disabled, pin_signal: PTA1/UART0_RX/FTM2_CH0/CMP0_OUT/FTM2_QD_PHA/FTM1_CH1/JTAG_TDI}
  - {pin_num: '19', peripheral: n/a, signal: disabled, pin_signal: PTA2/UART0_TX/FTM2_CH1/CMP1_OUT/FTM2_QD_PHB/FTM1_CH0/JTAG_TDO/TRACE_SWO}
  - {pin_num: '20', peripheral: JTAG, signal: JTAG_TMS_SWD_DIO, pin_signal: PTA3/UART0_RTS_b/FTM0_CH0/FTM2_FLT0/EWM_OUT_b/JTAG_TMS/SWD_DIO}
  - {pin_num: '21', peripheral: GPIOA, signal: 'GPIO, 4', pin_signal: PTA4/LLWU_P3/FTM0_CH1/FTM0_FLT3/NMI_b, direction: INPUT}
  - {pin_num: '22', peripheral: SUPPLY, signal: 'VDD, 1', pin_signal: VDD22}
  - {pin_num: '23', peripheral: SUPPLY, signal: 'VSS, 1', pin_signal: VSS23}
  - {pin_num: '1', peripheral: SUPPLY, signal: 'VDD, 0', pin_signal: VDD1}
  - {pin_num: '2', peripheral: SUPPLY, signal: 'VSS, 0', pin_signal: VSS2}
  - {pin_num: '24', peripheral: OSC, signal: EXTAL0, pin_signal: EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0}
  - {pin_num: '25', peripheral: OSC, signal: XTAL0, pin_signal: XTAL0/PTA19/FTM0_FLT0/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1}
  - {pin_num: '27', peripheral: FTM1, signal: 'QD_PH, A', pin_signal: ADC0_SE8/ADC1_SE8/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/FTM1_QD_PHA/UART0_RX}
  - {pin_num: '28', peripheral: FTM1, signal: 'QD_PH, B', pin_signal: ADC0_SE9/ADC1_SE9/PTB1/I2C0_SDA/FTM1_CH1/FTM0_FLT2/EWM_IN/FTM1_QD_PHB/UART0_TX}
  - {pin_num: '29', peripheral: GPIOB, signal: 'GPIO, 2', pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/FTM0_FLT1/FTM0_FLT3, direction: INPUT}
  - {pin_num: '30', peripheral: GPIOB, signal: 'GPIO, 3', pin_signal: ADC0_SE13/PTB3/I2C0_SDA/UART0_CTS_b/FTM0_FLT0, direction: INPUT}
  - {pin_num: '31', peripheral: GPIOB, signal: 'GPIO, 16', pin_signal: PTB16/UART0_RX/FTM_CLKIN0/EWM_IN, direction: INPUT}
  - {pin_num: '32', peripheral: GPIOB, signal: 'GPIO, 17', pin_signal: PTB17/UART0_TX/FTM_CLKIN1/EWM_OUT_b, direction: OUTPUT}
  - {pin_num: '33', peripheral: GPIOC, signal: 'GPIO, 0', pin_signal: ADC0_SE14/PTC0/SPI0_PCS4/PDB0_EXTRG/CMP0_OUT/FTM0_FLT1/SPI0_PCS0, direction: OUTPUT}
  - {pin_num: '34', peripheral: GPIOC, signal: 'GPIO, 1', pin_signal: ADC0_SE15/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FTM2_CH0, direction: INPUT}
  - {pin_num: '35', peripheral: GPIOC, signal: 'GPIO, 2', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FTM2_CH1, direction: INPUT}
  - {pin_num: '36', peripheral: UART1, signal: RX, pin_signal: CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT}
  - {pin_num: '37', peripheral: UART1, signal: TX, pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/CMP1_OUT, direction: OUTPUT}
  - {pin_num: '38', peripheral: GPIOC, signal: 'GPIO, 5', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT/FTM0_CH2, direction: OUTPUT}
  - {pin_num: '39', peripheral: GPIOC, signal: 'GPIO, 6', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/UART0_RX/I2C0_SCL, direction: INPUT}
  - {pin_num: '40', peripheral: GPIOC, signal: 'GPIO, 7', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/UART0_TX/I2C0_SDA, direction: OUTPUT}
  - {pin_num: '41', peripheral: FTM0, signal: 'CH, 0', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART0_RTS_b/FTM0_CH0/UART1_RX, identifier: PWM0, direction: OUTPUT}
  - {pin_num: '42', peripheral: FTM0, signal: 'CH, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART0_CTS_b/FTM0_CH1/UART1_TX, identifier: PWM1, direction: OUTPUT}
  - {pin_num: '43', peripheral: FTM0, signal: 'CH, 2', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART0_RX/FTM0_CH2/I2C0_SCL, identifier: PWM2, direction: OUTPUT}
  - {pin_num: '44', peripheral: FTM0, signal: 'CH, 3', pin_signal: PTD3/SPI0_SIN/UART0_TX/FTM0_CH3/I2C0_SDA, identifier: PWM3, direction: OUTPUT}
  - {pin_num: '45', peripheral: GPIOD, signal: 'GPIO, 4', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FTM2_CH0/EWM_IN, direction: INPUT}
  - {pin_num: '46', peripheral: GPIOD, signal: 'GPIO, 5', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FTM2_CH1/EWM_OUT_b, direction: INPUT}
  - {pin_num: '47', peripheral: GPIOD, signal: 'GPIO, 6', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH0/FTM1_CH0/FTM0_FLT0, direction: INPUT}
  - {pin_num: '48', peripheral: GPIOD, signal: 'GPIO, 7', pin_signal: PTD7/UART0_TX/FTM0_CH1/FTM1_CH1/FTM0_FLT1, direction: INPUT}
  - {pin_num: '3', peripheral: GPIOE, signal: 'GPIO, 16', pin_signal: ADC0_SE4a/ADC0_DP1/ADC1_DP2/PTE16/SPI0_PCS0/UART1_TX/FTM_CLKIN0/FTM0_FLT3, direction: INPUT,
    slew_rate: slow, pull_select: down, pull_enable: enable}
  - {pin_num: '4', peripheral: GPIOE, signal: 'GPIO, 17', pin_signal: ADC0_SE5a/ADC0_DM1/ADC1_DM2/PTE17/SPI0_SCK/UART1_RX/FTM_CLKIN1/LPTMR0_ALT3, direction: INPUT,
    slew_rate: slow, pull_select: down, pull_enable: enable}
  - {pin_num: '5', peripheral: GPIOE, signal: 'GPIO, 18', pin_signal: ADC0_SE6a/ADC1_DP1/ADC0_DP2/PTE18/SPI0_SOUT/UART1_CTS_b/I2C0_SDA, direction: INPUT, slew_rate: slow,
    pull_select: down, pull_enable: enable}
  - {pin_num: '6', peripheral: GPIOE, signal: 'GPIO, 19', pin_signal: ADC0_SE7a/ADC1_DM1/ADC0_DM2/PTE19/SPI0_SIN/UART1_RTS_b/I2C0_SCL, direction: INPUT, slew_rate: slow,
    pull_select: down, pull_enable: enable}
  - {pin_num: '15', peripheral: GPIOE, signal: 'GPIO, 24', pin_signal: ADC0_SE17/PTE24/FTM0_CH0/I2C0_SCL/EWM_OUT_b, direction: INPUT, slew_rate: slow, pull_select: down,
    pull_enable: enable}
  - {pin_num: '16', peripheral: GPIOE, signal: 'GPIO, 25', pin_signal: ADC0_SE18/PTE25/FTM0_CH1/I2C0_SDA/EWM_IN, direction: INPUT}
  - {pin_num: '7', peripheral: ADC0, signal: 'DP, 0', pin_signal: ADC0_DP0/ADC1_DP3}
  - {pin_num: '8', peripheral: ADC0, signal: 'DM, 0', pin_signal: ADC0_DM0/ADC1_DM3}
  - {pin_num: '13', peripheral: VREF, signal: OUT, pin_signal: VREF_OUT/CMP1_IN5/CMP0_IN5/ADC1_SE18}
  - {pin_num: '14', peripheral: DAC0, signal: OUT, pin_signal: DAC0_OUT/CMP1_IN3/ADC0_SE23}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t S2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA4 (pin 21)  */
    GPIO_PinInit(BOARD_INITPINS_S2_GPIO, BOARD_INITPINS_S2_PIN, &S2_config);

    gpio_pin_config_t S8_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB2 (pin 29)  */
    GPIO_PinInit(BOARD_INITPINS_S8_GPIO, BOARD_INITPINS_S8_PIN, &S8_config);

    gpio_pin_config_t S3_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB3 (pin 30)  */
    GPIO_PinInit(BOARD_INITPINS_S3_GPIO, BOARD_INITPINS_S3_PIN, &S3_config);

    gpio_pin_config_t S7_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB16 (pin 31)  */
    GPIO_PinInit(BOARD_INITPINS_S7_GPIO, BOARD_INITPINS_S7_PIN, &S7_config);

    gpio_pin_config_t BUZZ_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB17 (pin 32)  */
    GPIO_PinInit(BOARD_INITPINS_BUZZ_GPIO, BOARD_INITPINS_BUZZ_PIN, &BUZZ_config);

    gpio_pin_config_t LED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC0 (pin 33)  */
    GPIO_PinInit(BOARD_INITPINS_LED_GPIO, BOARD_INITPINS_LED_PIN, &LED_config);

    gpio_pin_config_t IS2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC1 (pin 34)  */
    GPIO_PinInit(BOARD_INITPINS_IS2_GPIO, BOARD_INITPINS_IS2_PIN, &IS2_config);

    gpio_pin_config_t S9_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC2 (pin 35)  */
    GPIO_PinInit(BOARD_INITPINS_S9_GPIO, BOARD_INITPINS_S9_PIN, &S9_config);

    gpio_pin_config_t EN2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC5 (pin 38)  */
    GPIO_PinInit(BOARD_INITPINS_EN2_GPIO, BOARD_INITPINS_EN2_PIN, &EN2_config);

    gpio_pin_config_t IS1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC6 (pin 39)  */
    GPIO_PinInit(BOARD_INITPINS_IS1_GPIO, BOARD_INITPINS_IS1_PIN, &IS1_config);

    gpio_pin_config_t EN1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC7 (pin 40)  */
    GPIO_PinInit(BOARD_INITPINS_EN1_GPIO, BOARD_INITPINS_EN1_PIN, &EN1_config);

    gpio_pin_config_t PHB_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD4 (pin 45)  */
    GPIO_PinInit(BOARD_INITPINS_PHB_GPIO, BOARD_INITPINS_PHB_PIN, &PHB_config);

    gpio_pin_config_t PHA_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD5 (pin 46)  */
    GPIO_PinInit(BOARD_INITPINS_PHA_GPIO, BOARD_INITPINS_PHA_PIN, &PHA_config);

    gpio_pin_config_t PUSH_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD6 (pin 47)  */
    GPIO_PinInit(BOARD_INITPINS_PUSH_GPIO, BOARD_INITPINS_PUSH_PIN, &PUSH_config);

    gpio_pin_config_t S5_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD7 (pin 48)  */
    GPIO_PinInit(BOARD_INITPINS_S5_GPIO, BOARD_INITPINS_S5_PIN, &S5_config);

    gpio_pin_config_t PE16_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE16 (pin 3)  */
    GPIO_PinInit(BOARD_INITPINS_PE16_GPIO, BOARD_INITPINS_PE16_PIN, &PE16_config);

    gpio_pin_config_t PE17_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE17 (pin 4)  */
    GPIO_PinInit(BOARD_INITPINS_PE17_GPIO, BOARD_INITPINS_PE17_PIN, &PE17_config);

    gpio_pin_config_t PE18_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE18 (pin 5)  */
    GPIO_PinInit(BOARD_INITPINS_PE18_GPIO, BOARD_INITPINS_PE18_PIN, &PE18_config);

    gpio_pin_config_t PE19_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE19 (pin 6)  */
    GPIO_PinInit(BOARD_INITPINS_PE19_GPIO, BOARD_INITPINS_PE19_PIN, &PE19_config);

    gpio_pin_config_t PE24_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE24 (pin 15)  */
    GPIO_PinInit(BOARD_INITPINS_PE24_GPIO, BOARD_INITPINS_PE24_PIN, &PE24_config);

    gpio_pin_config_t S4_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE25 (pin 16)  */
    GPIO_PinInit(BOARD_INITPINS_S4_GPIO, BOARD_INITPINS_S4_PIN, &S4_config);

    /* PORTA0 (pin 17) is configured as JTAG_TCLK */
    PORT_SetPinMux(PORTA, 0U, kPORT_MuxAlt7);

    /* PORTA1 (pin 18) is disabled */
    PORT_SetPinMux(PORTA, 1U, kPORT_PinDisabledOrAnalog);

    /* PORTA18 (pin 24) is configured as EXTAL0 */
    PORT_SetPinMux(PORTA, 18U, kPORT_PinDisabledOrAnalog);

    /* PORTA19 (pin 25) is configured as XTAL0 */
    PORT_SetPinMux(PORTA, 19U, kPORT_PinDisabledOrAnalog);

    /* PORTA2 (pin 19) is disabled */
    PORT_SetPinMux(PORTA, 2U, kPORT_PinDisabledOrAnalog);

    /* PORTA3 (pin 20) is configured as JTAG_TMS */
    PORT_SetPinMux(PORTA, 3U, kPORT_MuxAlt7);

    /* PORTA4 (pin 21) is configured as PTA4 */
    PORT_SetPinMux(BOARD_INITPINS_S2_PORT, BOARD_INITPINS_S2_PIN, kPORT_MuxAsGpio);

    /* PORTB0 (pin 27) is configured as FTM1_QD_PHA */
    PORT_SetPinMux(BOARD_INITPINS_PHA1_PORT, BOARD_INITPINS_PHA1_PIN, kPORT_MuxAlt6);

    /* PORTB1 (pin 28) is configured as FTM1_QD_PHB */
    PORT_SetPinMux(BOARD_INITPINS_PHB1_PORT, BOARD_INITPINS_PHB1_PIN, kPORT_MuxAlt6);

    /* PORTB16 (pin 31) is configured as PTB16 */
    PORT_SetPinMux(BOARD_INITPINS_S7_PORT, BOARD_INITPINS_S7_PIN, kPORT_MuxAsGpio);

    /* PORTB17 (pin 32) is configured as PTB17 */
    PORT_SetPinMux(BOARD_INITPINS_BUZZ_PORT, BOARD_INITPINS_BUZZ_PIN, kPORT_MuxAsGpio);

    /* PORTB2 (pin 29) is configured as PTB2 */
    PORT_SetPinMux(BOARD_INITPINS_S8_PORT, BOARD_INITPINS_S8_PIN, kPORT_MuxAsGpio);

    /* PORTB3 (pin 30) is configured as PTB3 */
    PORT_SetPinMux(BOARD_INITPINS_S3_PORT, BOARD_INITPINS_S3_PIN, kPORT_MuxAsGpio);

    /* PORTC0 (pin 33) is configured as PTC0 */
    PORT_SetPinMux(BOARD_INITPINS_LED_PORT, BOARD_INITPINS_LED_PIN, kPORT_MuxAsGpio);

    /* PORTC1 (pin 34) is configured as PTC1 */
    PORT_SetPinMux(BOARD_INITPINS_IS2_PORT, BOARD_INITPINS_IS2_PIN, kPORT_MuxAsGpio);

    /* PORTC2 (pin 35) is configured as PTC2 */
    PORT_SetPinMux(BOARD_INITPINS_S9_PORT, BOARD_INITPINS_S9_PIN, kPORT_MuxAsGpio);

    /* PORTC3 (pin 36) is configured as UART1_RX */
    PORT_SetPinMux(BOARD_INITPINS_UART1_RX_PORT, BOARD_INITPINS_UART1_RX_PIN, kPORT_MuxAlt3);

    /* PORTC4 (pin 37) is configured as UART1_TX */
    PORT_SetPinMux(BOARD_INITPINS_UART1_TX_PORT, BOARD_INITPINS_UART1_TX_PIN, kPORT_MuxAlt3);

    /* PORTC5 (pin 38) is configured as PTC5 */
    PORT_SetPinMux(BOARD_INITPINS_EN2_PORT, BOARD_INITPINS_EN2_PIN, kPORT_MuxAsGpio);

    /* PORTC6 (pin 39) is configured as PTC6 */
    PORT_SetPinMux(BOARD_INITPINS_IS1_PORT, BOARD_INITPINS_IS1_PIN, kPORT_MuxAsGpio);

    /* PORTC7 (pin 40) is configured as PTC7 */
    PORT_SetPinMux(BOARD_INITPINS_EN1_PORT, BOARD_INITPINS_EN1_PIN, kPORT_MuxAsGpio);

    /* PORTD0 (pin 41) is configured as FTM0_CH0 */
    PORT_SetPinMux(BOARD_INITPINS_PWM0_PORT, BOARD_INITPINS_PWM0_PIN, kPORT_MuxAlt4);

    /* PORTD1 (pin 42) is configured as FTM0_CH1 */
    PORT_SetPinMux(BOARD_INITPINS_PWM1_PORT, BOARD_INITPINS_PWM1_PIN, kPORT_MuxAlt4);

    /* PORTD2 (pin 43) is configured as FTM0_CH2 */
    PORT_SetPinMux(BOARD_INITPINS_PWM2_PORT, BOARD_INITPINS_PWM2_PIN, kPORT_MuxAlt4);

    /* PORTD3 (pin 44) is configured as FTM0_CH3 */
    PORT_SetPinMux(BOARD_INITPINS_PWM3_PORT, BOARD_INITPINS_PWM3_PIN, kPORT_MuxAlt4);

    /* PORTD4 (pin 45) is configured as PTD4 */
    PORT_SetPinMux(BOARD_INITPINS_PHB_PORT, BOARD_INITPINS_PHB_PIN, kPORT_MuxAsGpio);

    /* PORTD5 (pin 46) is configured as PTD5 */
    PORT_SetPinMux(BOARD_INITPINS_PHA_PORT, BOARD_INITPINS_PHA_PIN, kPORT_MuxAsGpio);

    /* PORTD6 (pin 47) is configured as PTD6 */
    PORT_SetPinMux(BOARD_INITPINS_PUSH_PORT, BOARD_INITPINS_PUSH_PIN, kPORT_MuxAsGpio);

    /* PORTD7 (pin 48) is configured as PTD7 */
    PORT_SetPinMux(BOARD_INITPINS_S5_PORT, BOARD_INITPINS_S5_PIN, kPORT_MuxAsGpio);

    /* PORTE16 (pin 3) is configured as PTE16 */
    PORT_SetPinMux(BOARD_INITPINS_PE16_PORT, BOARD_INITPINS_PE16_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[16] = ((PORTE->PCR[16] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullDown)

                      /* Slew Rate Enable: Slow slew rate is configured on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_SRE(kPORT_SlowSlewRate));

    /* PORTE17 (pin 4) is configured as PTE17 */
    PORT_SetPinMux(BOARD_INITPINS_PE17_PORT, BOARD_INITPINS_PE17_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[17] = ((PORTE->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullDown)

                      /* Slew Rate Enable: Slow slew rate is configured on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_SRE(kPORT_SlowSlewRate));

    /* PORTE18 (pin 5) is configured as PTE18 */
    PORT_SetPinMux(BOARD_INITPINS_PE18_PORT, BOARD_INITPINS_PE18_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[18] = ((PORTE->PCR[18] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullDown)

                      /* Slew Rate Enable: Slow slew rate is configured on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_SRE(kPORT_SlowSlewRate));

    /* PORTE19 (pin 6) is configured as PTE19 */
    PORT_SetPinMux(BOARD_INITPINS_PE19_PORT, BOARD_INITPINS_PE19_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[19] = ((PORTE->PCR[19] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullDown)

                      /* Slew Rate Enable: Slow slew rate is configured on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_SRE(kPORT_SlowSlewRate));

    /* PORTE24 (pin 15) is configured as PTE24 */
    PORT_SetPinMux(BOARD_INITPINS_PE24_PORT, BOARD_INITPINS_PE24_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[24] = ((PORTE->PCR[24] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullDown)

                      /* Slew Rate Enable: Slow slew rate is configured on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_SRE(kPORT_SlowSlewRate));

    /* PORTE25 (pin 16) is configured as PTE25 */
    PORT_SetPinMux(BOARD_INITPINS_S4_PORT, BOARD_INITPINS_S4_PIN, kPORT_MuxAsGpio);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_UART1TXSRC_MASK)))

                  /* UART 1 transmit data source select: UART1_TX pin. */
                  | SIM_SOPT5_UART1TXSRC(SOPT5_UART1TXSRC_UART_TX));

    SIM->SOPT8 =
        ((SIM->SOPT8 &
          /* Mask bits to zero which are setting */
          (~(SIM_SOPT8_FTM0OCH0SRC_MASK | SIM_SOPT8_FTM0OCH1SRC_MASK | SIM_SOPT8_FTM0OCH2SRC_MASK | SIM_SOPT8_FTM0OCH3SRC_MASK)))

         /* FTM0 channel 0 output source: FTM0_CH0 pin is output of FTM0 channel 0 output. */
         | SIM_SOPT8_FTM0OCH0SRC(SOPT8_FTM0OCH0SRC_FTM)

         /* FTM0 channel 1 output source: FTM0_CH1 pin is output of FTM0 channel 1 output. */
         | SIM_SOPT8_FTM0OCH1SRC(SOPT8_FTM0OCH1SRC_FTM)

         /* FTM0 channel 2 output source: FTM0_CH2 pin is output of FTM0 channel 2 output. */
         | SIM_SOPT8_FTM0OCH2SRC(SOPT8_FTM0OCH2SRC_FTM)

         /* FTM0 channel 3 output source: FTM0_CH3 pin is output of FTM0 channel 3 output. */
         | SIM_SOPT8_FTM0OCH3SRC(SOPT8_FTM0OCH3SRC_FTM));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
