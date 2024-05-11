//
// Created by huigg on 2024/5/11.
//

#include "pid.h"

/********* Global Variables *********/

PID_Parameter speed_Parameter =
        {
                .integral = 0,   //初始化，勿改动
                .lastError = 0,  //初始化，勿改动
                .error = 0,		//初始化，勿改动
                .kp = 400,
                .ki = 0,
                .kd = 0,
                .proportionMax = 100,    // 比例项最大值
                .integralMax = 0,       // 积分项最大值
                .derivativeMax = 0,     // 微分项最大值
                .outputMax = 100         // 输出最大值
        };
PID_Parameter* motor_PIDInfo = &speed_Parameter;

/********* Function Definitions *********/

/**
 * @brief PID计算
 * @param target 目标值
 * @param PIDInfo PID参数结构体指针
 * @return 输出值
 * @note 做了限幅处理，输出值在[-outputMax, outputMax]之间
 */
float PIDCalc(float target, PID_Parameter* PIDInfo)
{
    float componentKp, componentKi, componentKd;
    PIDInfo->error = target - PIDInfo->input;

    PIDInfo->integral += PIDInfo->error;
    PIDInfo->derivative = PIDInfo->error - PIDInfo->lastError;
    //限值，注意单独限制integral
    if(PIDInfo->ki != 0)    //防止除数为0
        PIDInfo->integral = clip(PIDInfo->integral, -PIDInfo->integralMax/PIDInfo->ki, PIDInfo->integralMax/PIDInfo->ki);
    componentKi = PIDInfo->integral * PIDInfo->ki;

    componentKp = clip(PIDInfo->error * PIDInfo->kp, -PIDInfo->proportionMax, PIDInfo->proportionMax);
    componentKd = clip(PIDInfo->derivative * PIDInfo->kd, -PIDInfo->derivativeMax, PIDInfo->derivativeMax);

    PIDInfo->output = clip(componentKp + componentKi + componentKd, -PIDInfo->outputMax, PIDInfo->outputMax);
    //PIDInfo->output = clip(componentKp + componentKi + componentKd, 0, PIDInfo->outputMax);

    PIDInfo->lastError =  PIDInfo->error;  //更新误差

    return PIDInfo->output;
}