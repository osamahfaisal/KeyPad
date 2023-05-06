
/*
    NAME: Osamah Faisal Abdulatef 
    Section:1
    B.N:1
*/

#ifndef  KEYPAD_H
#define KEYPAD_H
#include "Std_Types.h"



#define COL_PORT  GPIO_B
#define COL_START_INDEX 0
#define COL_END_INDEX 2



#define ROW_PORT  GPIO_B
#define ROW_START_INDEX 5
#define ROW_END_INDEX 8

#


#define NUM_COL  3
#define NUM_ROW  4


// provided function 
void keypad_Init(void);
void keypad_Manage(void);
uint8 keypad_Getkey(void);

// required function 
void keypadCallout_keyPressNotification(void);

#endif
