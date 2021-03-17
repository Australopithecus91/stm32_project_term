// библиотека  lcd 

#include "lcd_ini.h"

void delay_lcd (void)
{
	uint16_t  hour;
	for (hour=0; hour>10000; hour++){}
}


//---------------------------------------------------------------------------------//
void LCD_Write_Data (uint8_t dt)
{
 if (((dt>>3) &0x01)==1) {d3_set();} else {d3_reset();}
 if (((dt>>2) &0x01)==1) {d2_set();} else {d2_reset();}
 if (((dt>>1) &0x01)==1) {d1_set();} else {d3_reset();}
 if ((dt&0x01)==1) {d0_set();}      else {d4_reset();}
}

//------------------------------------------/// 

void LCD_Command(uint8_t dt)
{
rs0_reset(); 
LCD_Write_Data(dt>>4); // сдвигаем 
rs1_set();
delay_lcd();
rs0_reset();
LCD_Write_Data(dt);
rs1_set(); 
delay_lcd();


}
void LCD_INI (void)
{
 HAL_Delay(40); //
 
}
//----------------------------------------------------------//
