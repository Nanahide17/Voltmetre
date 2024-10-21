/*
 * Bouton.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#ifndef CPP_BOUTON_HPP_
#define CPP_BOUTON_HPP_

#ifdef __cplusplus
#include "main_cpp.hpp"

class Bouton{
public :
	void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

private :
	int flag=0;
};
#endif


#endif /* CPP_BOUTON_HPP_ */
