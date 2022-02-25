/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:54:25 by tigerber          #+#    #+#             */
/*   Updated: 2022/02/25 13:48:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iostream>
#include <stdio.h>

int main() {

	Phonebook repertoire;
	std::string cmd;
	int i = 0;
	int index = 0;

	repertoire.menu_phonebook();

	while(1) {

		std::cout << "Enter option : ";
		std::getline(std::cin, cmd);

		if (cmd.compare("ADD") == 0)
		{
			if (i == 8)
				i = 0;
			if (i < 8)
			{
				repertoire.contacts[i].add_in_phonebook(i);
				i += 1;
			}
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "Empty contacts list, use [ADD] to add contacts !" << std::endl;
			else {
				repertoire.Search_contacts();
				index = repertoire.Look_for_contacts(i);
				if (index)
					repertoire.contacts[index - 1].print_contact();
			}
		}
		else if (cmd.compare("EXIT") == 0)
			return 0;
		else
			std::cout << "Option not found !" << std::endl;
	}
}
