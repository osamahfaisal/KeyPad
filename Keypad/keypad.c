/*
    NAME: Osamah Faisal Abdulatef 
    Section:1
    B.N:1
*/

#include "keypad.h"
#include "Std_Types.h"
#include "Gpio.h"


static uint8 KEYNUMBER ;
void keypad_Init(void)
{
    uint8 index=0;
 

    // config col  pin 
    for (index =COL_START_INDEX; index<=COL_END_INDEX ;++index)
    {
      GPIO_ConfigPin(COL_PORT,index ,GPIO_INPUT ,GPIO_INPUT_PULL_UP);
    }
    
    // config row pin 
    for (index =ROW_START_INDEX; index<=ROW_END_INDEX ;++index)
    {
      GPIO_ConfigPin(ROW_PORT,index ,GPIO_OUTPUT  ,GPIO_PUSH_PULL);
      
    }

    // ideal  state of output pins 
    for ( index =ROW_START_INDEX; index<=ROW_END_INDEX ;++index)
    {
      GPIO_WritePin(ROW_PORT , index , HIGH);
    }
    

}



void keypad_Manage(void){
  uint8 row ;
  uint8 col ;
  uint8 pinState1;
  uint8 pinState2;


  for ( row = ROW_START_INDEX; row <=ROW_END_INDEX;++row)
  {
    //  active row 
    GPIO_WritePin(ROW_PORT , row , LOW);
    for ( col = COL_START_INDEX; col <=COL_END_INDEX; ++col)
    {
      // read pin 
      pinState1=GPIO_ReadPin(COL_PORT , col);
      if(pinState1==LOW){
        // delay 
        for (uint32 i = 0; i < 3000; i++) ;
        pinState2=GPIO_ReadPin(COL_PORT , col);
        //  if button pressed call back  keypadCallout
        if(pinState2==LOW){
          KEYNUMBER=((row -ROW_START_INDEX)*NUM_COL)+(col-COL_START_INDEX);
          keypadCallout_keyPressNotification();
        }
      }
    }
    //  deactive row 
    GPIO_WritePin(ROW_PORT , row , HIGH);

}   
    }


// get keypad pressed number 
uint8 keypad_Getkey(void){
return  KEYNUMBER;
	}




