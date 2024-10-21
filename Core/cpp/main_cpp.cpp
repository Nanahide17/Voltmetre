/*
 * main_cpp.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: anahi
 */

#include "main_cpp.hpp"



void main_cpp(ADC_HandleTypeDef *hadc){
	MAX7219_Handle_TypeDef max_7219_handle;
	max_7219_handle.hspi=&hspi1;
	max_7219_handle.spi_ncs_port=NCS_GIOP_PORT;
	max_7219_handle.spi_ncs_pin=NCS_GPIO_PIN;
	max_7219_handle.digits_count=4;
	Segment segm(&max_7219_handle);
	Potentiometre potar;
	Terminal term;
	float voltage=0.0;
	HAL_StatusTypeDef max_status=segm.init(&max_7219_handle);

	while(1){
		HAL_ADC_Start(hadc);
		potar.getADC(hadc);
		voltage=potar.getVolt();
		term.show(voltage);
		segm.show(voltage);
		HAL_Delay(500);
	}

}
