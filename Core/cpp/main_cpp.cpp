/*
 * main_cpp.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: anahi
 */

#include "main_cpp.hpp"

extern ADC_HandleTypeDef hadc;

void main_cpp(){
	//Instanciation Voltmetre
	Voltmetre voltmetre;
	voltmetre.voltmetre(&hadc);
}

void interrupt(){
	//Fonction pour gérer le sleep mode
	HAL_SuspendTick();
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON,PWR_STOPENTRY_WFI); //Entrer en stop avec low power et interruption
	HAL_ResumeTick();
	SystemClock_Config();
}
