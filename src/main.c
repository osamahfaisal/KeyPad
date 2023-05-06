/*
    NAME: Osamah Faisal Abdulatef
    Section:1
    B.N:1
*/





#include "Gpio.h"
#include "keypad.h"
#include "Std_Types.h"
#include "Rcc.h"




int main(){
	Rcc_Init();
	Rcc_Enable(RCC_GPIOA);  // active port 
	Rcc_Enable(RCC_GPIOB);
	keypad_Init();
	uint32 i = 0;

	for ( i = 0; i < 7; i++)
	{
		GPIO_ConfigPin( GPIO_A , i , GPIO_OUTPUT , GPIO_PUSH_PULL ); 
	}



// done
	while (1)
	{
		keypad_Manage();
 		for ( i = 0; i < 100000; i++)
 		{

 		}

	}
	


	return 0 ;
}



void keypadCallout_keyPressNotification(){

	uint8 keyNumber= keypad_Getkey()+1; // function that git number
	switch (keyNumber)
	{


		case 0:
			 GPIO_WritePin(GPIO_A , 0 , HIGH);
			 GPIO_WritePin(GPIO_A , 1 , HIGH);
			 GPIO_WritePin(GPIO_A , 2 , HIGH);
			 GPIO_WritePin(GPIO_A , 3 , HIGH);
			 GPIO_WritePin(GPIO_A , 4 , HIGH);
			 GPIO_WritePin(GPIO_A , 5 , HIGH);
			 GPIO_WritePin(GPIO_A , 6 , LOW);
		break;

		case 1:
			GPIO_WritePin(GPIO_A , 0 , LOW);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , LOW);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 , LOW);
			GPIO_WritePin(GPIO_A , 6 , LOW);
			break ;


		case 2:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , LOW );
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , HIGH);
			GPIO_WritePin(GPIO_A , 5 , LOW);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;

		case 3:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 , LOW);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 4:
			GPIO_WritePin(GPIO_A , 0 , LOW);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , LOW);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 , HIGH);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;

		case 5:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , LOW);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 ,HIGH);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;

		case 6:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , LOW);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , HIGH);
			GPIO_WritePin(GPIO_A , 5 , HIGH);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 7:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , LOW);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 , LOW);
			GPIO_WritePin(GPIO_A , 6 , LOW);
			break;
		case 8:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , HIGH);
			GPIO_WritePin(GPIO_A , 5 , HIGH);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;
		case 9:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			GPIO_WritePin(GPIO_A , 1 , HIGH);
			GPIO_WritePin(GPIO_A , 2 , HIGH);
			GPIO_WritePin(GPIO_A , 3 , HIGH);
			GPIO_WritePin(GPIO_A , 4 , LOW);
			GPIO_WritePin(GPIO_A , 5 , HIGH);
			GPIO_WritePin(GPIO_A , 6 , HIGH);
			break;


//  make default as zero 
			default:
			GPIO_WritePin(GPIO_A , 0 , HIGH);
			 GPIO_WritePin(GPIO_A , 1 , HIGH);
			 GPIO_WritePin(GPIO_A , 2 , HIGH);
			 GPIO_WritePin(GPIO_A , 3 , HIGH);
			 GPIO_WritePin(GPIO_A , 4 , HIGH);
			 GPIO_WritePin(GPIO_A , 5 , HIGH);
			 GPIO_WritePin(GPIO_A , 6 , LOW);
			 break;




	}



	
}








	






		





