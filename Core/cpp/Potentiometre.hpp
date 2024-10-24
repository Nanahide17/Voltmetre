/*
 * Potentiometre.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#ifndef CPP_POTENTIOMETRE_HPP_
#define CPP_POTENTIOMETRE_HPP_

#include "main_cpp.hpp"

class Potentiometre{
public :
	float getVolt(void);
	void getADC(ADC_HandleTypeDef *hadc);
private :
	int adc;
	float volt=0.0;
};



#endif /* CPP_POTENTIOMETRE_HPP_ */
