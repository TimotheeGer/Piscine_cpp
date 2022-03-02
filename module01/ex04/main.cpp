/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:43:23 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:43:25 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int ft_error(int val)
{
	if (val == 1)
	{
		std::cout << "Error Argument." << std::endl;
		return 1;
	}
	if (val == 2)
	{
		std::cout << "Error Open file." << std::endl;
		return 0;		
	}
	if (val == 3)
	{
		std::cout << "Error Parametre Argument." << std::endl;
		return 0;		
	}
	return (0);
}

int main (int ac, char **av)
{
	if (ac != 4)
		return (ft_error(1));
	
	std::ifstream file(av[1]);
	if (!file.is_open())
		return (ft_error(2));
	std::string file_name = av[1];
	file_name.append(".replace");

	std::string s1 = av[2];
	if (s1.length() == 0)
		return (ft_error(3));
	
	std::string s2 = av[3];
	if (s2.length() == 0)
		return (ft_error(3));

	std::ofstream outfile(file_name.c_str());
	if (!outfile.is_open())
		return (ft_error(2));

	std::string str;
	std::getline(file, str, '\0');

	size_t pos = 0;
	int i = 0;
	while (1)
	{
		pos = str.find(s1, i);
		i = pos + s2.length();
		if (pos == std::string::npos)
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
	outfile << str;
	outfile.close();
}
