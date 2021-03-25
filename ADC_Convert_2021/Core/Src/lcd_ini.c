// библиотека  lcd 

#include "lcd_ini.h"

void delay_lcd(void) // функция задержки на 1000 микросекунд
{
	uint16_t  hour;
	for (hour=0; hour>10000; hour++){}
}


//---------------------------------------------------------------------------------//
void LCD_Write_Data (uint8_t dt)  // функция записи в память дисплея
{
 if (((dt>>3) &0x01)==1) {d3_set();} else {d3_reset();}
 if (((dt>>2) &0x01)==1) {d2_set();} else {d2_reset();}
 if (((dt>>1) &0x01)==1) {d1_set();} else {d3_reset();}
 if ((dt&0x01)==1) {d0_set();}       else {d0_reset();}
}

//------------------------------------------/// 

void LCD_Command(uint8_t dt)  // функция команд
{
rs0_reset(); 
LCD_Write_Data(dt>>4); // сдвигаем биты
rs1_set();
delay_lcd();
rs0_reset();
LCD_Write_Data(dt);
rs1_set(); 
delay_lcd();

}



 void LCD_INI (void) // функция иниливзация дисплея
{
 HAL_Delay(40);// задержка
 rs0_reset();
 LCD_Write_Data(3);
 rs1_set();
 delay_lcd();
 rs0_reset();
 HAL_Delay(1);
 LCD_Write_Data(3);
  rs1_set();
  delay_lcd();
  rs0_reset();
  LCD_Write_Data(3);
  rs1_set();
  delay_lcd();
  rs0_reset();
  HAL_Delay(1);  // LCD_Command(0x28);// режим 4 битаб шрифт 5х8
  HAL_Delay(1);
  LCD_Command(0x28);// еще раз для верности
  HAL_Delay(1);
  LCD_Command(0x0F);// курсор включен
  HAL_Delay(1);
  LCD_Command(0x01);// очищаем мусор
  HAL_Delay(2);
  LCD_Command(0x06);// пишим влево
  HAL_Delay(2);
  LCD_Command(0x06);// возращаем курсор
  HAL_Delay(2);
}
//----------------------------------------------------------//
