/*
 * Potentiometre.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Potentiometre.hpp"

//Permet transformé les données reçues en ADC en volt et renvoie le voltage
float Potentiometre::getVolt(void){
	this->volt=((float)this->adc/4095.0)*3.3;
	return volt;
}

//Récupère la valeur capter au potentiomètre
void Potentiometre::getADC(ADC_HandleTypeDef *hadc){
	this->adc=HAL_ADC_GetValue(hadc);
}

