/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:44:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 00:47:22 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

long ft_stoi( std::string s, int *a ) {

    long i;
    std::istringstream(s) >> i;
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
	{
		std::cout << "stoi ERROR = " << i << std::endl;
		*a = -1;
		return i;
	}
	return i;
}

bool 	checkIsInt( std::string _value) {

	int i = 0;
	int a = 0;
	if (_value[i] == '-' || _value[i] == '+')
		i++;
	while (_value[i] >= '0' && _value[i] <= '9')
		i++;
	if (i != _value.length() || _value.length() > 11)
	{
		std::cout << "is int = " << -1 << std::endl; 
		return false;
	}
	i = ft_stoi(_value, &a);
	if (i == 0 && a == -1)
		return false;
	else
	{
		std::cout << "int ok = " <<  static_cast<int>(i) << std::endl;
		return true;
	}
	return false;
}

int main (int ac, char **av) {

	// if (ac != 2)
	//  	return 0;

	// Convert a(av[1]);
	// a.checkWhichConvert();
	std::string num = "239840923840935832497";

	for (int i = 0; num[i]; i++)
		std::cout << "num = " << num[i] << std::endl;

	std::cout << "check int = " << checkIsInt(num) << std::endl;
	// std::string name = "'";
	// char c;
	// int i;
	// float f;
	// double d;

	// c = 127;
	// i = static_cast<int>(c);
	// f = static_cast<float>(c);
	// d = static_cast<double>(c);
	// std::string name = "salut12";

	// std::cout << c << std::endl;
	// std::string name2 = "0";

	// std::string name3 = "12,45";

	// std::string name4 = "12.45";

	// // ft_stoi(name);

	// std::cout << "stoi(name) " << c << std::endl;
	// std::cout << "stoi(name2) " << i  << std::endl;
	// std::cout << "stoi(name3) " <<  f << 'f' << std::endl;
	// std::cout << "stoi(name4) " << d;
	// if (1)
	// 	std::cout << ".0" << std::endl;
	// else
	//  	std::cout << std::endl;
	return 0;
}