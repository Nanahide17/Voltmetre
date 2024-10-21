#include "7segm.hpp"

HAL_StatusTypeDef Segment::init(MAX7219_Handle_TypeDef *max_7219_handle){
	return max7219_init(max_7219_handle);
}

void Segment :: show(float volt){
	//parse float voltage into a 4digit
	int tab[4]={0};
	tab[0]=0;
	tab[1]= int(volt);
	int decimal = int((volt-tab[1])*100);
	tab[2] = int(decimal/10);
	tab[3] = decimal-tab[2]*10;
	//debug
	std::cout << "Voltage2 :" << tab[0] << tab[1] <<","<< tab[2]<<tab[3] << std::endl;
	//Print in 7 segment digit
	max7219_erase_decode();
	max7219_display_decode(DIGIT_0_REG_BASE,registre[0]);
	max7219_display_decode(DIGIT_1_REG_BASE,registre[tab[1]]);
	max7219_display_decode(DIGIT_2_REG_BASE,registre[tab[2]]);
	max7219_display_decode(DIGIT_3_REG_BASE,registre[tab[3]]);
}
