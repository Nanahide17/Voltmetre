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
	Segments affichage;
	while(1){
		HAL_ADC_Start(hadc);
		potentiometre.getADC(hadc);           //Récupération de la valeur ADC
		this->volt=potentiometre.getVolt();   //Calcul de la valeur capté en volt
		affichage.show(this->volt);           //Affichage (sur 7 segment)
		this->temps = HAL_GetTick();
		while(HAL_GetTick()-this->temps<500){ //Permet d'attendre 500ms
			continue;
		}
	}
}

//float Voltmetre::getData(){
//	return volt;
//}

