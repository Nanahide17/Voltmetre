/*
 * 7segment.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "7segment.hpp"

//Permet l'affichage sur le 7 segment
void Segments::show(float data){
	//Récupération de la données et récupère les 4 premiers chiffres de ce nombre
	int entier = static_cast<int>(data);
	float decimal = std::fabs(data) - std::fabs(entier);

	tab[0] = entier == 0 ? 0 : std::abs(entier % 10);

	for (int i = 1; i < 4; i++) {
		decimal *= 10;
		int digit = static_cast<int>(std::floor(decimal)) % 10;
		this->tab[i] = digit;
	}

	//Affichage
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


