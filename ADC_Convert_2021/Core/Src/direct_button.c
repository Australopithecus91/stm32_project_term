#include "direct_button.h"

/////--------------------------------------------------------------///
int increase_func(void)
{
	if (increase_set() == GPIO_PIN_SET) {
		count++;
		if (count == 24) {
			count = 0;
		}

	}

	return count;
}

 int decrease_func(void)
 {
	 if (dicrease_set() == GPIO_PIN_SET) {
		 if (count>0) {
			 count--;
		 }
	 }

 }

 int menu_func(void)
 {
	 if (menu_set() == GPIO_PIN_SET) {
		 if(cmt>=2){
			 cmt=0;
		 }
		 cmt++;
	 }

	 switch(cmt){
	 case 0:
		 kf=1;
	     break;
	 case 1:
		 kf=10;
		 break;
	 case 2:
	     kf=100;
	     break;


	 }
  return kf;
 }
