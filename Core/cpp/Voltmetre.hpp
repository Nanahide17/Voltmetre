/*
 * Voltmetre.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#ifndef CPP_VOLTMETRE_HPP_
#define CPP_VOLTMETRE_HPP_

//Inclusion des bibliothèques nécessaire
#include "main_cpp.hpp"
#include "Peripherique/Potentiometre.hpp"
#include "Affichage/Affichage.hpp"
#include "Affichage/7segment.hpp"

class Voltmetre {
public :
	void voltmetre(ADC_HandleTypeDef *hadc);

private :
	float volt;
	uint32_t temps;
};



#endif /* CPP_VOLTMETRE_HPP_ */
