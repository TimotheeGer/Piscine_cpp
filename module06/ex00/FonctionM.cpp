/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FonctionM.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:06:18 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 17:50:47 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// ************************************************************************** //
//                               Member Fonction                          	  //
// ************************************************************************** //

bool	Convert::CheckIsCharacter() {

	if (this->_value.length() == 1)
	{
		if (this->_value[0] >= 32 && this->_value[0] <= 126)
		{
			this->_char = static_cast<char>(this->_value[0]);
			this->is_char = 1;
			return true;
		}
		else
			return false;
	}
	return false;
}

bool 	Convert::checkIsInt() {

	unsigned long i = 0;
	long num = 0;
	
	if (this->_value[i] == '-' || this->_value[i] == '+')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (i != this->_value.length())
			return false;
	num = ft_stoi(this->_value);
	if (this->is_int == -1)
	{
		std::cout << "overflow " << std::endl;	
		return false;
	}
	else
	{
		std::cout << "TRUE I " << std::endl;

		this->_int = static_cast<int>(num);
		this->is_int = 1;
		return true;
	}
	return false;
}

bool 	Convert::CheckIsFloat() {

	unsigned long i = 0;

	if (this->_value[i] == '-' || this->_value[i] == '+')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (this->_value[i++] != '.')
		return false;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (this->_value[i] != 'f' || ++i != this->_value.length())
	{
		std::cout << "FALSE F1" << std::endl;
		return false;
	}	
	
	this->_float = std::stof(this->_value);
	std::cout << "FLOAT = " << this->_float << std::endl;
	
	return true;
}

bool 	Convert::CheckIsDouble() {

	unsigned long i = 0;

	if (this->_value[i] == '-' || this->_value[i] == '+')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (this->_value[i++] != '.')
		return (false);
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (i != this->_value.length())
	{
		
		std::cout << "FALSE D " << std::endl;
		return false;
	}
	
	this->_double = std::stod(this->_value);
	std::cout << "DOUBLE = " << this->_double << std::endl;
	
	return true;
}

bool Convert::ValueConvertor() {

	if (this->CheckIsCharacter())
		this->convert_char();
	else if (this->checkIsInt())
		this->convert_int();
	else if (this->CheckIsFloat())
		this->convert_float();
	else if (this->CheckIsDouble())
		this->convert_double();	
	else
	{
		std::cout << "impossible convertion" << std::endl;
		return false;
	}
	
	return true;
}

// ************************************************************************** //
//                         Member Fonction psedo literal                   	  //
// ************************************************************************** //

void	Convert::conv_str() {

	this->char_str = "impossible";
	this->int_str = "impossible";
	this->float_str = _value + "f";
	this->double_str = _value;
	return ;
}

bool 	Convert::checkIsNanOrInf() {

	if (this->_value.compare("nan") == 0 || this->_value.compare("nanf") == 0)
	{
		this->conv_str();
		return true;
	}
	if (this->_value.compare("+inf") == 0 || this->_value.compare("+inff") == 0)
	{
		this->conv_str();
		return true;
	}
	if (this->_value.compare("-inf") == 0 || this->_value.compare("-inff") == 0)
	{
		this->conv_str();
		return true;
	}
	return false;
}

// ************************************************************************** //
//                               Member Fonction base                   	  //
// ************************************************************************** //

void Convert::checkWhichConvert() {

	if (this->_value.empty())
	{
		std::cout << "String is empty" << std::endl;
		return ;
	}
	if (checkIsNanOrInf())
	{
		printPseudo();
	}
	else
	{
		if (ValueConvertor())
			printConv();
	}
	return ;
}
