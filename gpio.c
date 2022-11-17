#include "GPIO.h"

void GPIO_Clock_Enable(uint32_t *GPIOx)
{
  assert(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC || GPIOx == GPIOD );
  uint16_t *RCCAHB1 = (uint16_t *)(0x40023830);
 
  if ( GPIOx ==GPIOA )
    *RCCAHB1 |= (1<<0);
  else if ( GPIOx ==GPIOB )
    *RCCAHB1 |= (1<<1);
  else if ( GPIOx ==GPIOC )
    *RCCAHB1 |= (1<<2);
    else   if ( GPIOx ==GPIOD )
    *RCCAHB1 |= (1<<3);
 
}
void GPIO_Config (uint32_t *GPIOx, uint8_t pin,  uint8_t Mode, uint8_t Type)
{
  uint32_t *GPIO_MODER = (uint32_t *) (GPIOx); 
    *GPIO_MODER |=((0 << pin*2) && (Mode << pin*2)) ; // registre MODER = 0
  uint32_t *GPIO_OTYPER = (uint32_t *) (GPIOx + 0x04);
  
    if (Type == 0) 
    { 
      *GPIO_OTYPER |=(0<< pin);
    }
    else if (Type == 1)
    { 
      *GPIO_OTYPER |=(1<< pin); 
    }
}
