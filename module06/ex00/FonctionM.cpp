/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FonctionM.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:06:18 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/01 13:14:38 by tigerber         ###   ########.fr       */
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

	int i;

	i = ft_stoi(this->_value);
	if (i == 0 && this->stoi == 1)
	{
		return false;
	}
	else
	{
		this->_int = static_cast<int>(i);
		this->is_int = 1;
		return true;
	}
	return false;
}

bool 	is_digit(char c) {

	if (c >= '0' && c <= '9')
		return true;
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

void	Convert::conv_str() {

	this->char_str = "impossible";
	this->int_str = "impossible";
	this->float_str = _value + "f";
	this->double_str = _value;
	return ;
}

void	Convert::convert_char() {

	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	return ;
}

void	Convert::convert_int() {

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

long Convert::ft_stoi( std::string s ) {

    long i;
    std::istringstream(s) >> i;
	if (i > 2147483647 || i < -2147483648)
	{
		this->stoi = 1;
		i = 0;
		return i;
	}
	return i;
}

void Convert::ValueConvertor() {

	if (this->CheckIsCharacter())
	{
		this->convert_char();
	}
	if (this->checkIsInt())
	{
		convert_int();
	}
	if (this->CheckIsFloat_Double() && this->is_float == 1)
	{
		convert_float();
	}
	if (this->CheckIsFloat_Double() && this->is_double == 1)
	{
		convert_double();
	}

	return ;
}

void Convert::print_function() {

	std::cout << "char: " << this->char_str << std::endl;
	std::cout << "int: " << this->int_str << std::endl;
	std::cout << "float: " << this->float_str << std::endl;
	std::cout << "double: " << this->double_str << std::endl;
	return ;
}

void Convert::print_function_two() {

	if (this->_int < 32 || this->_int > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_char << "'" << std::endl;
	std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float;
	if (this->is_int == 1)
		std::cout << ".0f" << std::endl;
	else
		std::cout << std::endl;
	std::cout << "double: " << this->_double;
	if (this->is_int == 1)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
	return ;
}

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


int	Convert::check_sign( std::string str, long int *i, int sign )
{
	if (str[*i] == '-')
	{
		sign *= -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
	return (sign);
}