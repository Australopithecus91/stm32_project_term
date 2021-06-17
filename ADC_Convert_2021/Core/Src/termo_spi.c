/*
 * termo_spi.c
 *
 *  Created on: Apr 19, 2021
 *      Author: User
 */

#include "termo_spi.h"

//#define MAX_6675_SPI  &hspi1

// ФУнкция возрата значение микросхемы

 uint8_t max6675_ReadReg (uint16_t *reg)
 {

	 //возращаемые значение функции hal
	 HAL_StatusTypeDef hal_answer= HAL_ERROR;

	 // массив для полученных данных
	 uint8_t tempch[2]= {0};

	 //выбор микросхемы

	 MAX_6675_CS_SET(); // низкий уровень

	 // Чтение микросхемы
	hal_answer= HAL_SPI_Receive(&hspi1, tempch , 2, 100);

	MAX_6675_CS_RESET();

	 if (hal_answer == HAL_OK)
	 {
		 // проверка на подключение датчика
		 if(tempch[1]& 0x04) return  MAX_6675_ERROR 0;

		 // преобразование полученных данных

		 *reg (uint_16)(tempch>>3); //  сдвигаем на пять бит права
		 *reg  (uint_16)(tempch<<5);

		 return MAX_6675_OK;
	 }

	 return  MAX_6675_ERROR 0;

 }


 //фнкция преобразование температуры

 float max6675_temp(uint16_t reg)
{



	 return reg*0.25;
 }
