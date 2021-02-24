/*
 * StepperMotor_prg.c
 *
 *  Created on: May 20, 2020
 *      Author: Anwar
 */


#include"STD_TYPES.h"
#include "BIT_MATH.h"
#undef  F_CPU
#define F_CPU 8000000
#include <util/delay.h>
#include"DIO_INT.h"
#include"StepperMotor_cfg.h"
#include"StepperMotor_int.h"

void StepperMotor_vidInit(void)
{
	Dio_vidSetPinDir(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8OUTPUT);
	Dio_vidSetPinDir(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8OUTPUT);
	Dio_vidSetPinDir(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8OUTPUT);
	Dio_vidSetPinDir(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8OUTPUT);
}

void StepperMotor_vidTurnRight(u16 Degree)
{
	u16 Step;
	for(Step=0;Step<Degree;Step++)
	{
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8HIGH);
		_delay_ms(2);
	}
}

void StepperMotor_vidTurnLeft(u16 Degree)
{
	u16 Step ;
	for(Step=0;Step<Degree;Step++)
	{
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8HIGH);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
		Dio_vidSetPinVal(STEPPERMOTOR_u8ORANGECOIL_PIN,DIO_u8HIGH);
		Dio_vidSetPinVal(STEPPERMOTOR_u8YELLOWCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8PINKCOIL_PIN,DIO_u8LOW);
		Dio_vidSetPinVal(STEPPERMOTOR_u8BLUECOIL_PIN,DIO_u8LOW);
		_delay_ms(2);
	}
}
