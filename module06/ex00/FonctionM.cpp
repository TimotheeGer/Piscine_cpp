/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FonctionM.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:06:18 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 00:31:46 by tigerber         ###   ########.fr       */
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

	int i = 0;
	
	if (this->_value[i] == '-' || this->_value[i] == '+')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (i != this->_value.length() || this->_value.length() > 11)
	{
		this->is_int = -1;
		return false;
	}
	i = ft_stoi(this->_value);
	if (i == 0 && this->is_int == -1)
		return false;
	else
	{
		this->_int = static_cast<int>(i);
		this->is_int = 1;
		return true;
	}
	return false;
}

bool 	Convert::CheckIsFloat_Double() {

	std::string val = this->_value;
	int len = val.length();
	int i = 0;
	int point = 0;

	if (val[len] == 'f')
	{
		len -= 1;
		this->is_float = 1;
	}
	while (val[len])
	{
		if (val[len] == '.')
			point++;
		if (!is_digit(val[len]))
			return false;
		len--;
	}
	if (point == 1)
	{
		if (point == 1 && this->is_float == 1)
		{
			this->_float = static_cast<float>(std::atof(val.c_str()));
			return true;
		}
		this->is_double = 1;
		this->_double = static_cast<double>(std::atof(val.c_str()));
		return true;
	}
	return false;
}

void Convert::ValueConvertor() {

	if (this->CheckIsCharacter())
		this->convert_char();
	if (this->checkIsInt())
		convert_int();
	if (this->CheckIsFloat_Double() && this->is_float == 1)
		convert_float();
	if (this->CheckIsFloat_Double() && this->is_double == 1)
		convert_double();
	else
		std::cout << "impossible convertion" << std::endl;
	return ;
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
		print_function();
	}
	else
	{
		ValueConvertor();
		print_function_two();
	}
	return ;
}