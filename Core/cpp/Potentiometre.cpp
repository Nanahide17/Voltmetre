/*
 * Potentiometre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Potentiometre.hpp"

int Potentiometre::getData(void){
	return volt;
}

void Potentiometre::getVoltage(ADC_HandleTypeDef *hadc){
	this->volt=HAL_ADC_GetValue(hadc);
}
