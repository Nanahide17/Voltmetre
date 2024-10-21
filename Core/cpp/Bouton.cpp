/*
 * Bouton.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#include "Bouton.hpp"

void Bouton::HAL_GPIO_EXTI_Callback(uint16_t btn){
	if(btn==BTN1_Pin){
		if(this->flag==0){
			HAL_SuspendTick();
			HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON,PWR_STOPENTRY_WFI);
			flag=1;
		}
		if(this->flag==1){
			HAL_ResumeTick();
			HAL_SYSTICK_Config(32);
		}

	}

}


