#include "Lab_pwm.h"
#include "peripherals.h"
#include "fsl_ftm.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/**
* @brief 控制电机PWM信号
* @param DC0 电机0占空比
* @param DC1 电机1占空比
* @param DC2 电机2占空比
* @param DC3 电机3占空比
* @return 无
* @note 使用始终FTM0模块，通道0-3，频率在board/peripherals.h中定义
*/
void lab_pwm_set(uint8_t DC0, uint8_t DC1, uint8_t DC2, uint8_t DC3)
{
	/* Disable channel output before updating the dutycycle */
	//FTM_UpdateChnlEdgeLevelSelect(FTM0, kFTM_Chnl_0, 0U);

	/* Update PWM duty cycle */
	FTM_UpdatePwmDutycycle(FTM0, kFTM_Chnl_0, kFTM_CenterAlignedPwm, DC0);
	FTM_UpdatePwmDutycycle(FTM0, kFTM_Chnl_1, kFTM_CenterAlignedPwm, DC1);
	FTM_UpdatePwmDutycycle(FTM0, kFTM_Chnl_2, kFTM_CenterAlignedPwm, DC2);
	FTM_UpdatePwmDutycycle(FTM0, kFTM_Chnl_3, kFTM_CenterAlignedPwm, DC3);

	/* Software trigger to update registers */
	FTM_SetSoftwareTrigger(FTM0, true);

	/* Start channel output with updated dutycycle */
	FTM_UpdateChnlEdgeLevelSelect(FTM0, kFTM_Chnl_0, kFTM_HighTrue);
	FTM_UpdateChnlEdgeLevelSelect(FTM0, kFTM_Chnl_1, kFTM_HighTrue);
	FTM_UpdateChnlEdgeLevelSelect(FTM0, kFTM_Chnl_2, kFTM_HighTrue);
	FTM_UpdateChnlEdgeLevelSelect(FTM0, kFTM_Chnl_3, kFTM_HighTrue);
}