/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:48:54 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/01 16:22:06 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {

	this->index = 0;
	return ;
}

Contact::~Contact( void ) {

	return ;
}

void Contact::secure_ask(std::string ask, std::string *data)
{
	while (1)
	{
		std::cout << ask;
		std::getline(std::cin, *data);
		if (*data == "")
			std::cout << "retry !" << std::endl;
		else
			break ;
	}
}

void Contact::add_in_PhoneBook( int i ) {

	this->index = i + 1;

	Contact::secure_ask("Enter first name     : ", &this->_first_name);
	Contact::secure_ask("Enter last name      : ", &this->_last_name);
	Contact::secure_ask("Enter nickname name  : ", &this->_nickname);
	Contact::secure_ask("Enter phone number   : ", &this->_phone_number);
	Contact::secure_ask("Enter Darkest secret : ", &this->_darkest_secret);

	std::cout << "New contact added !" << std::endl;
	return ;
}

void Contact::print_index( void ) {
	
	if (this->index != 0)
	{
		int i = 0;
		int size[3];
		std::string data[3];
		data[0] = this->_first_name;
		data[1] = this->_last_name;
		data[2] = this->_nickname;
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
	std::cout << "First Name     : " << this->_first_name << std::endl;
	std::cout << "Last Name      : " << this->_last_name << std::endl;
	std::cout << "Nickname       : " << this->_nickname << std::endl;
	std::cout << "Phone Number   : " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->_darkest_secret << std::endl;
	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
}