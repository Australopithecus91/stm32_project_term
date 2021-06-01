#ifndef DIRECT_BUTTON_H_
#define DIRECT_BUTTON_H_

#include "stm32f4xx_hal.h"
//------------------------------------------------------------------------------//
#define menu_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10) // функция входа в меню
#define increase_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_9) // функция входа в меню
#define dicrease_set() HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8) // функция входа в меню

// СВетодиоды
#define led_red() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15_RESET) // светодиод горит
#define led_red() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15_SET) // погашен светодиод
#define led_blue() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14_RESET) // светодиод горит
#define led_blue() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14_SET) // погашен светодиод
#define led_yelow() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13_RESET) // светодиод горит
#define led_yelow() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13_SET) // погашен светодиод

// выход  микроконтроллера
#define optron_open() HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12_RESET) // оптрон открыт
#define optron_off()  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12_SET) // оптрон закрыт

// вход транзистора

#define mosfet_open() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11_SET)// транзистор открыт
#define mosfet_0ff() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11_RESET)//ЯТроанзистор заккрыт


int increase_func(void);
int decrease_func(void);
int count = 0;
int cmt = 0;
int kf = 0;


#endif /*DIRECT_BUTTON_H__ */
