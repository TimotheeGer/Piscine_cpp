/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:44:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 13:58:27 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// long ft_stoi( std::string s, int *a ) {

//     long i;
//     std::istringstream(s) >> i;
// 	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
// 	{
// 		std::cout << "stoi ERROR = " << i << std::endl;
// 		*a = -1;
// 		return i;
// 	}
// 	return i;
// }

// bool 	checkIsInt( std::string _value) {

// 	int i = 0;
// 	int a = 0;
// 	if (_value[i] == '-' || _value[i] == '+')
// 		i++;
// 	while (_value[i] >= '0' && _value[i] <= '9')
// 		i++;
// 	if (i != _value.length() || _value.length() > 11)
// 	{
// 		std::cout << "is int = " << -1 << std::endl; 
// 		return false;
// 	}
// 	i = ft_stoi(_value, &a);
// 	if (i == 0 && a == -1)
// 		return false;
// 	else
// 	{
// 		std::cout << "int ok = " <<  static_cast<int>(i) << std::endl;
// 		return true;
// 	}
// 	return false;
// }

int main (int ac, char **av) {

	if (ac != 2)
	 	return 0;

	Convert a(av[1]);
	a.checkWhichConvert();
	// std::string num = "2398kjguygouygu";
	// std::string num2 = "2398.40923f";

	// for (int i = 0; num[i]; i++)
	// 	std::cout << "num = " << num[i] << std::endl;

	// std::cout << "check int = " << checkIsInt(num) << std::endl;

	// std::cout << "float or double = " << atof(num2.c_str()) << std::endl;
	// std::cout << "float or double2 = " << stod(num2) << std::endl;

	return 0;
}