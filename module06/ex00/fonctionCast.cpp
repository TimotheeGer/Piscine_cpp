/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctionCast.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:05:16 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 17:33:12 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// ************************************************************************** //
//                               Member Fonction cast                   	  //
// ************************************************************************** //

void	Convert::convert_char() {

	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	return ;
}

void	Convert::convert_int() {
	
	std::cout << "INT = " << this->_int << std::endl;
	std::cout << "FLOAT = " << this->_float << std::endl;
	std::cout << "CAST = " << static_cast<float>(this->_int);
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	return ;
}

void	Convert::convert_float() {

	this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
	return ;
}

void	Convert::convert_double() {

	this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
	return ;
}