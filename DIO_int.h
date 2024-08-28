/**************************************/
/* Author:  Hassan Abdul-rezeq        *
/* Date:    25-08-2024                *
/* Version: 1.0                       *
/* file : DIO_int.h                 *
/**************************************/
#include "STD_Types.h"

/*  define  ports */
#define DIO_Uint8_PORTA 0
#define DIO_Uint8_PORTB 1
#define DIO_Uint8_PORTC 2
#define DIO_Uint8_PORTD 3

/*  define  PINs */
#define DIO_uint8_PinNO_0   0
#define DIO_uint8_PinNO_1   1
#define DIO_uint8_PinNO_2   2
#define DIO_uint8_PinNO_3   3
#define DIO_uint8_PinNO_4   4
#define DIO_uint8_PinNO_5   5
#define DIO_uint8_PinNO_6   6
#define DIO_uint8_PinNO_7   7

/*  define  Directions  */ 
#define DIO_uint8_Dir_INPUT   0
#define DIO_uint8_Dir_OUTPUT  1

/*  define  Value */ 
#define DIO_uint8_Value_HIGH     1
#define DIO_uint8_Value_LOW      0





/*                 DIO_Functions                       */
void DIO_Void_SetPINDir (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO ,uint8 DIO_uint8_Dir );

void DIO_Void_SetPINValue (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO ,uint8 DIO_uint8_Value );

uint8 DIO_uint8_GetPINValue (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO  );
