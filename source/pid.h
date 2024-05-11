//
// Created by huigg on 2024/5/11.
//

#ifndef SERVO_CONTROL_COURSE_PID_H
#define SERVO_CONTROL_COURSE_PID_H

// PID参数结构体
typedef struct  PID_Parameter   //PID参数
{
    float input;
    float error;
    float lastError;
    float kp;
    float ki;
    float kd;
    float integral;
    float derivative;
    float proportionMax;
    float integralMax;
    float derivativeMax;
    float output;
    float outputMax;
} PID_Parameter;

#define clip(x, xmin, xmax) (((x)<(xmin))?(xmin):(((x)>(xmax))?(xmax):(x)))

float PIDCalc(float target, PID_Parameter* PIDInfo);


#endif //SERVO_CONTROL_COURSE_PID_H
