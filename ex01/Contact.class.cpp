/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:48:54 by tigerber          #+#    #+#             */
/*   Updated: 2022/02/25 13:50:15 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {

	this->index = 0;
	return ;

}

Contact::~Contact( void ) {

	return ;
}

void Contact::add_in_phonebook( int i ) {

	this->index = i + 1;

	std::cout << "Enter first name     : ";
	std::getline(std::cin, this->first_name);

	std::cout << "Enter last name      : ";
	std::getline(std::cin, this->last_name);

	std::cout << "Enter nickname name  : ";
	std::getline(std::cin, this->nickname);

	std::cout << "Enter phone number   : ";
	std::getline(std::cin, this->phone_number);

	std::cout << "Enter Darkest secret : ";
	std::getline(std::cin, this->darkest_secret);

	std::cout << "New contact added !" << std::endl;
	return ;
}

void Contact::print_index( void ) {
	
	if (this->index != 0)
	{
		int i = 0;
		int size[3];
		std::string data[3];
		data[0] = this->first_name;
		data[1] = this->last_name;
		data[2] = this->nickname;
		size[0] = data[0].size();
		size[1] = data[1].size();
		size[2] = data[2].size();

		while (i < 3)
		{
			if (size[i] > 10)
			{
				data[i].resize (9);
				data[i].resize (10, '.');
			}
			i++;
		}
		if (index == 1)
			std::cout << "*-------------------------------------------*" << std::endl;
		std::cout << "|" <<std::setfill (' ') << std::setw (10) << this->index << "|";
		std::cout << std::setfill (' ') << std::setw (10) << data[0] << "|";
		std::cout << std::setfill (' ') << std::setw (10) << data[1] << "|";
		std::cout << std::setfill (' ') << std::setw (10) << data[2] << "|" << std::endl;
		std::cout << "*-------------------------------------------*" << std::endl;
	}
}

void Contact::print_contact(void) {

	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
	std::cout << "First Name     : " << this->first_name << std::endl;
	std::cout << "Last Name      : " << this->last_name << std::endl;
	std::cout << "Nickname       : " << this->nickname << std::endl;
	std::cout << "Phone Number   : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
}