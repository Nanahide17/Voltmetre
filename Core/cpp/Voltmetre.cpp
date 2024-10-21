/*
 * Voltmetre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Voltmetre.hpp"

void Voltmetre::voltmetre(ADC_HandleTypeDef *hadc){
	Potentiometre potentiometre;

	HAL_ADC_Start(hadc);
	potentiometre.getADC(hadc);
	this->volt=potentiometre.getVolt();
}

float Voltmetre::getData(){
	return volt;
}

