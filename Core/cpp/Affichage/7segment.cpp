/*
 * 7segment.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "7segment.hpp"

void Segments::show(float data){
	std::memcpy(this->nombres, &data, sizeof(data));
	for(int i=0; i<4;i++){
		this->tab[i]=static_cast<int>(this->nombres[i]);
	}

	this->max7219_status=max7219_erase_no_decode();
	if(this->max7219_status!=HAL_OK){
		Error_Handler();
	}

	this->max7219_status=max7219_display_no_decode(0, this->code[this->tab[0]]);
	if(this->max7219_status!=HAL_OK){
		Error_Handler();
	}
	this->max7219_status=max7219_display_no_decode(1, this->code[10+this->tab[1]]);
	if(this->max7219_status!=HAL_OK){
		Error_Handler();
	}
	this->max7219_status=max7219_display_no_decode(2, this->code[10+this->tab[2]]);
	if(this->max7219_status!=HAL_OK){
		Error_Handler();
	}
	this->max7219_status=max7219_display_no_decode(3, this->code[10+this->tab[3]]);
	if(this->max7219_status!=HAL_OK){
		Error_Handler();
	}
}


