/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:08:33 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 19:12:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen ( void ) {

	return ;
}

Karen::~Karen ( void ) {

	return ;
}

void Karen::complain( std::string level ) {

	int i = 0;
	const int tab[5] = {

		level.compare("DEBUG"),
		level.compare("INFO"),
		level.compare("WARNING"),
		level.compare("ERROR"),
		0
	};
	while (i < 5)
	{
		if (tab[i] == 0)
			break;
		i++;
	}
	switch (i) {
		case 0:
			_debug();
		case 1:
			_info();
		case 2:
			_warning();
		case 3:
			_error();
			break;
		default:
			_default();
		break;
	}
	return ;
}

void Karen::_debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free . I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}

void Karen::_default( void ) {

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}