/*
 * StepperMotor_int.h
 *
 *  Created on: May 20, 2020
 *      Author: Anwar
 */

#ifndef STEPPERMOTOR_INT_H_
#define STEPPERMOTOR_INT_H_

#define ANGLE_45  64
#define ANGLE_90  128
#define ANGLE_180 257
#define ANGLE_270 385
#define ANGLE_360 510

void StepperMotor_vidInit(void);
void StepperMotor_vidTurnRight(u16 Degree);
void StepperMotor_vidTurnLeft(u16 Degree);

#endif /* STEPPERMOTOR_INT_H_ */
