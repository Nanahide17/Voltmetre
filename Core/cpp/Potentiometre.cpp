/*
 * Potentiometre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Potentiometre.hpp"

float Potentiometre::getVolt(void){
	this->volt=(this->adc/4095)*3.3;
	return volt;
}

void Potentiometre::getADC(ADC_HandleTypeDef *hadc){
	HAL_ADC_Start(hadc);
	this->adc=HAL_ADC_GetValue(hadc);
	HAL_ADC_Stop(hadc);
}

