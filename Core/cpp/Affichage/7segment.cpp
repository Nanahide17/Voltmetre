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
	int entier = static_cast<int>(data);                            //Récupération de la partie entière (avant la virgule)
	float decimal = std::fabs(data) - std::fabs(entier);            //Récupération de la partie décimal (après la virgule)

	tab[0] = entier == 0 ? 0 : std::abs(entier % 10);               //Si le nombre entier est inférieur à 1, la partie entière doit être 0 puis on la stocke

	for (int i = 1; i < 4; i++) {
		//Traitement de la partie en déplacemnt la virgule puis en stockant le chiffre après la virgule
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


