#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f30x.h"
#include "stm32f3_discovery.h"



void schedule_PI_interrupts();
void disable_PI_control();
void Set_Offset(int* value, int* pitch, int* roll, int* yaw);
void init_BATT_SENSE();
void bounds_check();
void arm_sequence();
void Decrease_Angular_Position(uint8_t value);
void Increase_Angular_Position(uint8_t value);
void init_pwm_gpio();
int init_pwm();
int slow_init_pwm(int pwm_freq);
void set_pwm_width(int channel, int pwm_period, uint32_t duty_cycle);
void set_pwm_width_norm(int channel, int pwm_period, float duty_cycle);
float gammaCorrect(int b, int c);


#endif
