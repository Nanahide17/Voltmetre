/*
 * Potentiometre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Potentiometre.hpp"

float Potentiometre::getVolt(void){
	this->volt=((float)this->adc/4095.0)*3.3;
	return volt;
}

void Potentiometre::getADC(ADC_HandleTypeDef *hadc){
	this->adc=HAL_ADC_GetValue(hadc);
}

