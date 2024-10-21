/*
 * Voltmetre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Voltmetre.hpp"
#include"Affichage/7segment.hpp"

void Voltmetre::voltmetre(ADC_HandleTypeDef *hadc){
	Potentiometre potentiometre;
	Bouton bouton;
//	Segments affichage;

	HAL_ADC_Start(hadc);
	potentiometre.getADC(hadc);
	this->volt=potentiometre.getVolt();


}

//float Voltmetre::getData(){
//	return volt;
//}

