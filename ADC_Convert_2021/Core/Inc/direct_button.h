#ifndef DIRECT_BUTTON_H_
#define DIRECT_BUTTON_H_

#include "stm32f4xx_hal.h"
//------------------------------------------------------------------------------//
#define menu_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10) // функция входа в меню
#define increase_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_9) // функция входа в меню
#define dicrease_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8) // функция входа в меню

int increase_func(void);
int decrease_func(void);
int count = 0;
int cmt = 0;
int kf = 0;


#endif /*DIRECT_BUTTON_H__ */
