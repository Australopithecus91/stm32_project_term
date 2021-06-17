/*
 * termo_spi.h
 *
 *  Created on: Apr 19, 2021
 *      Author: User
 */



#ifndef INC_TERMO_SPI_H_
#define INC_TERMO_SPI_H_
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_spi.h"


//интерфейс spi

//#define MAX_6675_SPI &hspi // указатель на структуру

#define MAX_6675_CS_SET()   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET)// незнанаю где chip select)
#define MAX_6675_CS_RESET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET) // chip select  1


//проверка микросхемы

#define MAX_6675_OK    1
#define MAX_6675_ERROR 0

// ФУнкция возрата значение микросхемы

 uint8_t max6675_ReadReg (uint16_t *reg);

// перевод принятых данных в температуру
 float max6675_temp(uint16_t reg);



#endif /* INC_TERMO_SPI_H_ */
