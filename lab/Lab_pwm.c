#include "Lab_pwm.h"
#include "peripherals.h"
#include "fsl_ftm.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
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