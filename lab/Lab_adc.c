#include "fsl_adc16.h"
#include "Lab_adc.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define LAB_ADC16_BASE          ADC0
#define LAB_ADC16_CHANNEL_GROUP 0U
#define LAB_ADC16_USER_CHANNEL  0U /* ADC0_DP0, ADC0_DM0 */

void lab_adc_init()
{
    /* Structure of initialize ADC */
    adc16_config_t adc16ConfigStruct;
    adc16_channel_config_t adc16ChannelConfigStruct;

    ADC16_GetDefaultConfig(&adc16ConfigStruct);
	
#ifdef BOARD_ADC_USE_ALT_VREF
    adc16ConfigStruct.referenceVoltageSource = kADC16_ReferenceVoltageSourceValt;
#endif
	
    ADC16_Init(LAB_ADC16_BASE, &adc16ConfigStruct);
    ADC16_EnableHardwareTrigger(LAB_ADC16_BASE, false); /* Make sure the software trigger is used. */
	
#if defined(FSL_FEATURE_ADC16_HAS_CALIBRATION) && FSL_FEATURE_ADC16_HAS_CALIBRATION
    if (kStatus_Success == ADC16_DoAutoCalibration(LAB_ADC16_BASE))
    {
        PRINTF("ADC16_DoAutoCalibration() Done.\r\n");
    }
    else
    {
        PRINTF("ADC16_DoAutoCalibration() Failed.\r\n");
    }
#endif /* FSL_FEATURE_ADC16_HAS_CALIBRATION */

	adc16ChannelConfigStruct.channelNumber                        = LAB_ADC16_USER_CHANNEL;
    adc16ChannelConfigStruct.enableInterruptOnConversionCompleted = false;
	
#if defined(FSL_FEATURE_ADC16_HAS_DIFF_MODE) && FSL_FEATURE_ADC16_HAS_DIFF_MODE
    adc16ChannelConfigStruct.enableDifferentialConversion = false;
#endif /* FSL_FEATURE_ADC16_HAS_DIFF_MODE */
	
}