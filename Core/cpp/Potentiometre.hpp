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
	int getData(void);
	void getVoltage(int volt, ADC_HandleTypeDef *hadc);

private :
	int volt;
};



#endif /* CPP_POTENTIOMETRE_HPP_ */
