
/**************************************/
/* Author:  Hassan Abdul-rezeq        *
/* Date:    25-08-2024                *
/* Version: 1.0                       *
/* file : Bit_Math.h                 *
/**************************************/

#define SET_BIT(Var,BitNo)           Var = Var | (1<<BitNo)
#define CLEAR_BIT(Var,BitNo)           Var = Var & ~(1<<BitNo)
#define TOGGLE_BIT(Var,BitNo)           Var = Var ^ (1<<BitNo)
#define GET_BIT(Var,BitNo)           (Var >> BitNo) & 1
#define ASSIGN_BI(Var,Byte)            Var = Byte