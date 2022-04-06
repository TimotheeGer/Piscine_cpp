/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:07:22 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 17:33:34 by tigerber         ###   ########.fr       */
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

// long Convert::ft_stoi( std::string s ) {

//     long i;
//     std::istringstream(s) >> i;
// 	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
// 	{
// 		this->is_int = -1;
// 		return 0;
// 	}
// 	return i;
// }

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

	if (this->_int < 32 || this->_int > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_char << "'" << std::endl;
	
	if (this->is_int == -1)
		std::cout << "int: error overflow" << std::endl;
	else
		std::cout << "int: " << this->_int << std::endl;
	
	// if (this->is_int == 1)
	// 	std::cout << "float: " << this->_float << ".0f" << std::endl;
	// else
		std::cout << "float: " << this->_float << "f" << std::endl;
	
	// if (this->is_int == 1)
	// 	std::cout << "double: " << this->_double << ".0" << std::endl;
	// else
		std::cout << "double: " << this->_double << std::endl;
	return ;
}

// ************************************************************************** //
//                               Member exception                       	  //
// ************************************************************************** //

const char* Convert::InputOverflow::what() const throw()
{
	return ("input value overflow, conversion inpossible");
}