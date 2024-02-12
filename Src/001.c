/*
 * 001.c
 *
 *  Created on: Sep 5, 2023
 *      Author: chait
 */

#include "Nucelol476RG.h"

#include "Nucelo476RG_gpio.h"
void delay(void)
{
	for(uint32_t i = 0 ; i < 500000 ; i ++);
}

uint32_t *pRCCGPIOA =  (uint32_t*)0x4002104C;

int main(void)
{
///	*pRCCGPIOA |= 0x05;
//	*pMODEGPIOC &= ~(3<<26); // PC13 AS INPUT MODE;


	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOA;
	 // GpioLed.pGPIOx = (GPIO_RegDef_t*)GPIOA_BASEADDR;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	    *pRCCGPIOA |= 0x05;
	    GPIO_PeriClockControl(GPIOA,ENABLE);

		GPIO_Init(&GpioLed);

		while(1)
		{   GPIO_ToggleOutputPin(GPIOA,GPIO_PIN_NO_5);
		   // GPIO_WriteToOutputPin(GPIOA,GPIO_PIN_NO_5,GPIO_PIN_SET);
			delay();
		}
return 0;
}
