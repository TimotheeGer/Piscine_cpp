/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:00:36 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/01 15:37:00 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <stdio.h>

PhoneBook::PhoneBook(void) {

	return ;
}

PhoneBook::~PhoneBook( void ) {

	return ;
}

void PhoneBook::menu_PhoneBook(void) {
	
	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
	std::cout << "| /$$$$$$$  /$$                                     /$$$$$$$                      /$$       |" << std::endl;
	std::cout << "|| $$__  $$| $$                                    | $$__  $$                    | $$       |" << std::endl;
	std::cout << "|| $$  | $$| $$$$$$$   /$$$$$$  /$$$$$$$   /$$$$$$ | $$  | $$  /$$$$$$   /$$$$$$ | $$   /$$ |" << std::endl;
	std::cout << "|| $$$$$$$/| $$__  $$ /$$__  $$| $$__  $$ /$$__  $$| $$$$$$$  /$$__  $$ /$$__  $$| $$  /$$/ |" << std::endl;
	std::cout << "|| $$____/ | $$  | $$| $$  | $$| $$  | $$| $$$$$$$$| $$__  $$| $$  | $$| $$  | $$| $$$$$$/  |" << std::endl;
	std::cout << "|| $$      | $$  | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$| $$  | $$| $$  | $$| $$_  $$  |" << std::endl;
	std::cout << "|| $$      | $$  | $$|  $$$$$$/| $$  | $$|  $$$$$$$| $$$$$$$/|  $$$$$$/|  $$$$$$/| $$ |  $$ |" << std::endl;
	std::cout << "||__/      |__/  |__/ |______/ |__/  |__/ |_______/|_______/  |______/  |______/ |__/  |__/ |" << std::endl;
	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
	std::cout << "| Option : [ADD] [SEARCH] [EXIT]                                                            |" << std::endl;
	std::cout << "*-------------------------------------------------------------------------------------------*" << std::endl;
}

void PhoneBook::Search_contacts(void) {

	int i = 0;

	while (i < 8)
	{
		this->contacts[i].print_index();
		i++;
	}
	return ;
}

int PhoneBook::cpp_atoi(std::string str) {
	
	long int	i;
	long int	res;
	long int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int PhoneBook::Look_for_contacts ( int i ) {

	std::string val;
	std::cout << "Enter index to find contacts : ";
	std::getline(std::cin, val);

	int num = cpp_atoi(val);
	
	if (num > 0 && num < i + 1)
		return (num);
	else
		std::cout << "No contact found !" << std::endl;
	return 0;
}
