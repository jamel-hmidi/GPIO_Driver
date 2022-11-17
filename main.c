/**
  ******************************************************************************
  * @file    main.c
  * @author  Jamel Hmidi
  * @brief   GPIO DRIVER 
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/*----------------Private Functions Prototype---------------------------------*/
//static void delay(unsigned int delay);

/* Private define ------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

int main()
{ 
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
  while(1)
  {
   
  }
}



/**************************************END OF FILE**************************************/
