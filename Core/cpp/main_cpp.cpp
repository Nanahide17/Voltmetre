/*
 * main_cpp.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: anahi
 */

#include "main_cpp.hpp"

extern ADC_HandleTypeDef hadc;

void main_cpp(){
	Voltmetre voltmetre;
	voltmetre.voltmetre(&hadc);

}
