//// передача по usart_2

#include "Usart_2_ini.h"
#include "ADC_ini.h"
#include <string.h>
#include <stdio.h>

UART_HandleTypeDef huart2;

float voltage;

char tran_str[64]={0,};      //

void usart_transmit(void) // функция для передачи данных  по usart
{
	//voltage = convert_adc();
    sprintf(tran_str, "voltage %.2f", voltage);
    HAL_UART_Transmit(&huart2, (uint8_t*)tran_str, strlen(tran_str), 1000);
	HAL_Delay(500); 
	
}


void usart_transmitor(void) // функция для передачи данных  по usart
{
	//voltage = convert_adc();
    sprintf(tran_str, "voltage %.2f", voltage);
    HAL_UART_Transmit(&huart2, (uint8_t*)tran_str, strlen(tran_str), 1000);
	HAL_Delay(500);

}
