/*
 * lcd_ini.h
 *
 *  Created on: Mar 4, 2021
 *      Author: User
 */

#ifndef SRC_LCD_INI_H_
#define SRC_LCD_INI_H_

#include "stm32f4xx_hal.h"
//------------------------------------------------------------------------------//
#define d0_set() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_SET) // логическая 1 на
#define d1_set() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_SET)
#define d2_set() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET)// линии 	данных 0
#define d3_set() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_SET)

#define d0_reset() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_RESET) // логическая 1 на
#define d1_reset() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_RESET)
#define d2_reset() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET)// линии 	данных 0
#define d3_reset() HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_RESET)


//-----------------------------------------------------------------------------//
#define  e1_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET) // управление данными
#define  e0_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET)
//--------------------------------------------------------------------------//
#define  rs1_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET)
#define  rs0_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET)

 void LCD_INI (void); // прототип функции

 void LCD_Clear (void);  // протототип функции очистки дисплея
 void LCD_Send_Char(char ch);
 void LCD_String (char* sym);


#endif /* SRC_LCD_INI_H_ */
