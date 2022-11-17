/**
  ******************************************************************************
  * @file    main.c
  * @author  jarray fakhreddine
  * @brief   GPIO DRIVER 
  * @version V2.0.0
  * @date    15-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/


#include "GPIO.h"    
/* Private define ------------------------------------------------------------*/
   
int main()
{
 // GPIO_Clock_Enable( (uint32_t*) 0x40020401);
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config (GPIOD, PIN12, OUTPUT, OUTPUT_PUSH_PULL);
  GPIO_Config (GPIOB,PIN10,INPUT,OUTPUT_OPEN_DRAIN);
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
