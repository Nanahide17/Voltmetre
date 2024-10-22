/*
 * Potentiometre.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#ifndef CPP_POTENTIOMETRE_HPP_
#define CPP_POTENTIOMETRE_HPP_

#ifdef __cplusplus
#include "main_cpp.hpp"

//Création classe Potentiometre
class Potentiometre{
public :
	float getVolt(void);
	void getADC(ADC_HandleTypeDef *hadc);
private :
	int adc;
	float volt=0.0;
};
#endif


#endif /* CPP_POTENTIOMETRE_HPP_ */
