/*
 * 7segment.hpp
 *
 *  Created on: Oct 21, 2024
 *      Author: anahi
 */

#ifndef CPP_AFFICHAGE_7SEGMENT_HPP_
#define CPP_AFFICHAGE_7SEGMENT_HPP_

#ifdef __cplusplus
extern "C" {

#endif
//Importation biblothèque en C
#include "max7219.h"

#ifdef __cplusplus

}
#include "main_cpp.hpp"
#include "Affichage.hpp"
#include <cmath>

//Importation du SPI qui se situe dans le main
extern SPI_HandleTypeDef hspi1;

//Crétaion classe Segment issu de Affichage
class Segments : Affichage{
public :
	void show(float data);
	//Constructeur(initialisation)
	Segments(){
		this->max7219_handle.hspi=&hspi1;
		this->max7219_handle.spi_ncs_port=NCS_GPIO_Port;
		this->max7219_handle.spi_ncs_pin=NCS_Pin;
		this->max7219_handle.digits_count=4;

		this->max7219_status=max7219_init(&(this->max7219_handle));
		if(this->max7219_status!=HAL_OK){
			Error_Handler();
		}
	}

private :
	MAX7219_Handle_TypeDef max7219_handle;
	HAL_StatusTypeDef max7219_status;
	int tab[4];
	//Tableau d'encodage des caractères pour afficheurs 7 segments
	uint8_t code[20]={0b1111110, //0.
			0b10110000, //1.
			0b11101101, //2.
			0b11111001, //3.
			0b10110011, //4.
			0b11011011, //5.
			0b11011111, //6.
			0b11110000, //7.
			0b11111111, //8.
			0b11111011, //9.
			0b01111110, //0
			0b00110000, //1
			0b01101101, //2
			0b01111001, //3
			0b00110011, //4
			0b01011011, //5
			0b01011111, //6
			0b01110000, //7
			0b01111111, //8
			0b01111011, //9
			};
	};

#endif

#endif /* CPP_AFFICHAGE_7SEGMENT_HPP_ */
