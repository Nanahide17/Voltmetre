/*
 * main_cpp.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: anahi
 */

#include "main_cpp.hpp"


void main_cpp(ADC_HandleTypeDef *hadc){
	Potentiometre potar;
	Terminal term;
	float voltage=0.0;



	while(1){
		HAL_ADC_Start(hadc);
		potar.getADC(hadc);
		voltage=potar.getVolt();
		term.show(voltage);
		HAL_Delay(500);
	}

}
