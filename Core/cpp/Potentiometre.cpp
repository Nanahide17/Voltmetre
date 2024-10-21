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

void Potentiometre::getVoltage(int volt, ADC_HandleTypeDef *hadc){
	volt=HAL_ADC_GetValue(hadc);
}
