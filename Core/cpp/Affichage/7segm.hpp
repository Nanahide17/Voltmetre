/*
 * 7segm.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: Xourel
 */

#ifndef CPP_SEGMENT_HPP_
#define CPP_SEGMENT_HPP_

#include "main_cpp.hpp"
#include "Affichage.hpp"
#include "max7219.h"

int registre[10]={int(0x3F),int(0x06),int(0x5B),int(0x4F),int(0x66),int(0x6D),int(0x7D),int(0x07),int(0x7F),int(0x6F)};

class Segment : Affichage{
public :
	Segment(MAX7219_Handle_TypeDef *max_7219_handle){
		this->_max_7219_handle = max_7219_handle;
	}
	void show(float volt);
	HAL_StatusTypeDef init(MAX7219_Handle_TypeDef *max_7219_handle);
private:
	MAX7219_Handle_TypeDef *_max_7219_handle;
};



#endif /* CPP_SEGMENT_HPP_ */
