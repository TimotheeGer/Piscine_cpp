/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:07:22 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/07 15:29:36 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// ************************************************************************** //
//                               Member Fonction utils                   	  //
// ************************************************************************** //

bool 	is_digit(char c) {

	if (c >= '0' && c <= '9')
		return true;
	return false;
}

long Convert::ft_stoi( std::string s ) {

    long i;
    std::istringstream(s) >> i;
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
	{
		this->is_int = -1;
		return 0;
	}
	return i;
}

void Convert::checkOverflow(void) {

	if (this->_double > std::numeric_limits<char>::max() || this->_double < std::numeric_limits<char>::min())
		this->is_char = -1;
	if (this->_double > std::numeric_limits<int>::max() || this->_double < std::numeric_limits<int>::min())
		this->is_int = -1;
	if (this->_double > std::numeric_limits<float>::max() || this->_double < -std::numeric_limits<float>::max())
		this->is_float = -1;
	return ;
}

// ************************************************************************** //
//                               Member Fonction print                   	  //
// ************************************************************************** //

void Convert::printPseudo() {

	std::cout << "char: " << this->char_str << std::endl;
	std::cout << "int: " << this->int_str << std::endl;
	std::cout << "float: " << this->float_str << std::endl;
	std::cout << "double: " << this->double_str << std::endl;
	return ;
}

void Convert::printConv() {
	
	this->checkOverflow();
	
	if (this->is_char == -1)
		std::cout << "char: error overflow" << std::endl;
	else if ((this->_int < 32 || this->_int >= 127))
		std::cout << "char: 'Non displayable'" << std::endl;
	else
		std::cout << "char: '" << this->_char << "'" << std::endl;
	
	if (this->is_int == -1)
		std::cout << "int: error overflow" << std::endl;
	else
		std::cout << "int: " << std::to_string(this->_int) << std::endl;
	
	if (this->is_float == -1)
		std::cout << "float: error overflow" << std::endl;
	else
		std::cout << "float: " << std::to_string(this->_float) << "f" << std::endl;
	
	std::cout << "double: " << std::to_string(this->_double) << std::endl;
	return ;
}
