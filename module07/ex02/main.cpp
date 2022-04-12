/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:21:54 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/12 17:03:45 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {

	std::cout << "-----------------------Array_default-----------------------" << std::endl << std::endl;
	Array<int> tab;
	std::cout << "size of tab = " << tab.size() << std::endl << std::endl;
	
	try
	{
		tab[1];
	}
	catch (const std::exception &e)
	{
		std::cout << "tab " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-----------------------Array_char--------------------------" << std::endl << std::endl;
	Array<char> tab_char(6);
	std::cout << "size of tab_char = " << tab_char.size() << std::endl << std::endl;
	
	for (int i = 0; i < 6; i++)
		tab_char[i] = static_cast<char>('a' + i);

	try
	{
		for (int i = 0; i < 6; i++)
			std::cout << "tab char = " <<tab_char[i] << std::endl;
		
		std::cout << "tab_char = " <<tab_char[6] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "tab_cha " << e.what() << std::endl;
	}    
	
	std::cout << std::endl << "-----------------------Array_char_cpy----------------------" << std::endl << std::endl;
	Array<char> tab_char_cpy(tab_char);
	std::cout << "size of tab_char_cpy = " << tab_char_cpy.size() << std::endl << std::endl;

	for (int i = 0; i < 6; i++)
		std::cout << "tab char cpy = " << tab_char_cpy[i] << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 6; i++)
		tab_char_cpy[i] = static_cast<char>('z' - i);
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
		std::cout << "tab char cpy = " << tab_char_cpy[i] << std::endl;
	std::cout << std::endl;
		
	for (int i = 0; i < 6; i++)
		std::cout << "tab char = " << tab_char[i] << std::endl;
	
	std::cout << std::endl << "-----------------------Array_int---------------------------" << std::endl << std::endl;
	Array<int> tab_int(10);
	std::cout << "size of tab_int = " << tab_int.size() << std::endl << std::endl;
	
	for (int i = 0; i < 10; i++)
		tab_int[i] = i;
	
	Array<int> tab_int_cpy = tab_int;
	
	for (int i = 0; i < 10; i++)
		std::cout << "tab int = " << tab_int[i] << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << "tab int cpy = " << tab_int_cpy[i] << std::endl;	
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		tab_int_cpy[i] = 10 - i;

	for (int i = 0; i < 10; i++)
		std::cout << "tab int = " << tab_int[i] << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << "tab int cpy = " << tab_int_cpy[i] << std::endl;	
	std::cout << std::endl;
	
	tab_int_cpy = tab_int;

	for (int i = 0; i < 10; i++)
		std::cout << "tab int cpy = " << tab_int_cpy[i] << std::endl;	
	std::cout << std::endl;
	
	std::cout << std::endl << "-----------------------Array_int---------------------------" << std::endl << std::endl;

	Array<std::string> tab_string(3);
	std::cout << "size of tab_int = " << tab_int.size() << std::endl;

	tab_string[0] = "bonjour";
	tab_string[1] = "aurevoir";
	tab_string[2] = "merci";
	
	for (int i = 0; i < 3; i++)
		std::cout << "tab string = " << tab_string[i] << std::endl;
	std::cout << std::endl;
	



}
