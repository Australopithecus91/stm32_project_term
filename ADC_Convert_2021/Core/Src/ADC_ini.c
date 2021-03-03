// настройка АЦП 12 битным режиме

#include "ADC_ini.h"

float u;

ADC_HandleTypeDef hadc1;

//float convert_adc(void)
//{
	//HAL_ADCEx_Calibration_Start(&hadc1);                              // калибровка ацп
	//HAL_ADC_Start_IT(&hadc1); 										 // функция запуск аналогого- цифрового преобразователя)
	//HAL_ADC_PollForConversion(&hadc1,  100); 						 // дождемся окончание преобразаование
	//u=((float)HAL_ADC_GetValue(&hadc1))*(float)3.3/(float)4096;  	 // занесем результат в переменную u
	//HAL_ADC_Stop(&hadc1); 										 	 // остановим преогбразование
	//HAL_Delay (500);

	//return u;

//}

