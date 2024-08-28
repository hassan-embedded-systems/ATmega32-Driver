/**************************************/
/* Author:  Hassan Abdul-rezeq        *
/* Date:    25-08-2024                *
/* Version: 1.0                       *
/* file : main.c                *
/**************************************/


#define F_CPU 16000000
#include <util/delay.h>
#include "STD_Types.h"
#include "DIO_int.h"
#include <avr/io.h>

void main() {
	DIO_Void_SetPINDir(DIO_Uint8_PORTA, DIO_uint8_PinNO_1, DIO_uint8_Dir_INPUT);
	DIO_Void_SetPINDir(DIO_Uint8_PORTA, DIO_uint8_PinNO_0, DIO_uint8_Dir_OUTPUT);

	while (1) {
		if (DIO_uint8_GetPINValue(DIO_Uint8_PORTA, DIO_uint8_PinNO_1) == DIO_uint8_Value_HIGH) {
			DIO_Void_SetPINValue(DIO_Uint8_PORTA, DIO_uint8_PinNO_0, DIO_uint8_Value_HIGH);
			
			} else {
			DIO_Void_SetPINValue(DIO_Uint8_PORTA, DIO_uint8_PinNO_0, DIO_uint8_Value_LOW);
		}
	}
}
