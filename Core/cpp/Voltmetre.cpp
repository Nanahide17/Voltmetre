/*
 * Voltmetre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Voltmetre.hpp"
#include"Affichage/7segment.hpp"

void Voltmetre::voltmetre(ADC_HandleTypeDef *hadc){
	//Instanciation des classes nécéssaire pour le fonctionnement du voltmetre
	Potentiometre potentiometre;
	Bouton bouton;
	Segments affichage;
	while(1){
		HAL_ADC_Start(hadc);
		potentiometre.getADC(hadc);
		this->volt=potentiometre.getVolt();
		affichage.show(this->volt);
		this->temps = HAL_GetTick();
		while(HAL_GetTick()-this->temps<500){
			continue;
		}
	}
}

//float Voltmetre::getData(){
//	return volt;
//}

