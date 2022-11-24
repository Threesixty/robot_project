/*
 * File:   motor.c
 * Author: HP
 *
 * Created on 24 novembre 2022, 14:14
 */


#include <xc.h>
#include "motor.h"

void Motor1PWM(float dutyCycle, int motor) {
    // init timer
    // int period = int(1.0/dutyCycle);
    // PTPER = period;

    PTPER = 1000; // peiod
    /* Set Duty Cycles */
    PDC2 = 150;
    //PDC2 = 200;
    //PDC3 = 400;
    /* Set Dead Time Values */
    DTR2 = 25; //DTR2 = DTR3 = 25;
    ALTDTR2 = 25; //ALTDTR2 = ALTDTR3 = 25;
    /* Set PWM Mode to Push-Pull */
    IOCON2 = 0xC800; // IOCON2 = IOCON3 = 0xC800;
    /* Set Primary Time Base, Edge-Aligned Mode and Independent Duty Cycles */
    PWMCON2 = 0x0000; // PWMCON2 = PWMCON3 = 0x0000;
    /* Configure Faults */
    FCLCON2 = 0x0003; //FCLCON2 = FCLCON3 = 0x0003;
    /* 1:1 Prescaler */
    PTCON2 = 0x0000;
    /* Enable PWM Module */
    PTCON = 0x8000;
}

