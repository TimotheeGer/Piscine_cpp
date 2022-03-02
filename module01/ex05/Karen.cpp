/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:05:30 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 19:05:31 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {

	Karen::fct[0] = &Karen::_debug;
	Karen::fct[1] = &Karen::_info;
	Karen::fct[2] = &Karen::_warning;
	Karen::fct[3] = &Karen::_error;
	return ;
}

Karen::~Karen( void ) {

	return ;
}

void Karen::_debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void Karen::_info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	return ;
}

void Karen::_warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Karen::_error( void ) {

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void Karen::complain( std::string level) {

	int i = 0;
	const int tab[4] = {

		level.compare("DEBUG"),
		level.compare("INFO"),
		level.compare("WARNING"),
		level.compare("ERROR")
	};
	while (i < 4)
	{
		if (tab[i] == 0)
			(this->*fct[i])();
		i++;
	}
	return ;
}