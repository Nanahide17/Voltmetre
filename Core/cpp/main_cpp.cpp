/*
 * main_cpp.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: anahi
 */

#include "main_cpp.hpp"


void main_cpp(ADC_HandleTypeDef *hadc){
	Potentiometre potar;
	int voltage=0;

	while(1){
		HAL_ADC_Start(hadc);
		potar.getVoltage(hadc);
		voltage=potar.getData();
		HAL_Delay(500);
	}

}
