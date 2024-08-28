/**************************************/
/* Author:  Hassan Abdul-rezeq        *
/* Date:    25-08-2024                *
/* Version: 1.0                       *
/* file :DIO_prog.c               *
/**************************************/

 #include "DIO_int.h"
 #include "Bit_Math.h"
 #include "STD_Types.h"
 #include <avr/io.h>


 void DIO_Void_SetPINDir (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO ,uint8 DIO_uint8_Dir )
 {
    switch (DIO_Uint8_PORT)
    {
    case DIO_Uint8_PORTA :    // PORTA 
       if (DIO_uint8_Dir == DIO_uint8_Dir_INPUT) 
       {
        CLEAR_BIT (DDRA ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Dir == DIO_uint8_Dir_OUTPUT)
       {
          SET_BIT (DDRA,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTB :    // PORTB
       if (DIO_uint8_Dir == DIO_uint8_Dir_INPUT) 
       {
        CLEAR_BIT (DDRB ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Dir == DIO_uint8_Dir_OUTPUT)
       {
          SET_BIT (DDRB,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTC :    // PORTC 
       if (DIO_uint8_Dir == DIO_uint8_Dir_INPUT) 
       {
        CLEAR_BIT (DDRC ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Dir == DIO_uint8_Dir_OUTPUT)
       {
          SET_BIT (DDRC,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTD :    // PORTD
       if (DIO_uint8_Dir == DIO_uint8_Dir_INPUT) 
       {
        CLEAR_BIT (DDRD ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Dir == DIO_uint8_Dir_OUTPUT)
       {
          SET_BIT (DDRD,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    
    default:
        /*NO thang*/
        break;
    }
 }


 void DIO_Void_SetPINValue (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO ,uint8 DIO_uint8_Value )
 {
    switch (DIO_Uint8_PORT)
    {
    case DIO_Uint8_PORTA :    // PORTA 
       if (DIO_uint8_Value == DIO_uint8_Value_LOW) 
       {
        CLEAR_BIT (PORTA ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Value == DIO_uint8_Value_HIGH)
       {
          SET_BIT (PORTA,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTB :    // PORTB
       if (DIO_uint8_Value == DIO_uint8_Value_LOW) 
       {
        CLEAR_BIT (PORTB ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Value == DIO_uint8_Value_HIGH)
       {
          SET_BIT (PORTB,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTC :    // PORTC 
       if (DIO_uint8_Value == DIO_uint8_Value_LOW) 
       {
        CLEAR_BIT (PORTC ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Value == DIO_uint8_Value_HIGH )
       {
          SET_BIT (PORTC,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    case DIO_Uint8_PORTD :    // PORTD
       if (DIO_uint8_Value == DIO_uint8_Value_LOW) 
       {
        CLEAR_BIT (PORTD ,DIO_uint8_PinNO);
       }
       else if (DIO_uint8_Value == DIO_uint8_Value_HIGH)
       {
          SET_BIT (PORTD,DIO_uint8_PinNO);
       }
       else 
       {
        /*no thang */
       }

        break;
    
    default:
        /*NO thang*/
        break;
    }

 }


 uint8 DIO_uint8_GetPINValue (uint8 DIO_Uint8_PORT ,uint8 DIO_uint8_PinNO  )
 {
    uint8 Local_uint8_Result =0 ;
    switch (DIO_Uint8_PORT)
    {
    case DIO_Uint8_PORTA :    // PORTA 
             Local_uint8_Result = GET_BIT (PINA ,DIO_uint8_PinNO);
            

        break;
    case DIO_Uint8_PORTB :    // PORTB
             Local_uint8_Result = GET_BIT (PINB ,DIO_uint8_PinNO);
            

        break;
    case DIO_Uint8_PORTC :    // PORTC 
             Local_uint8_Result = GET_BIT (PINC,DIO_uint8_PinNO);
             

        break;
    case DIO_Uint8_PORTD :    // PORTD
            Local_uint8_Result = GET_BIT (PIND ,DIO_uint8_PinNO);
            
        break;
    
    default:
        /*NO thang*/
        break;
    }
	return Local_uint8_Result;
 }