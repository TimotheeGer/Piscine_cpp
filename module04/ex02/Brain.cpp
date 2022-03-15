/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:37 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 21:23:38 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Constructor Brain Default call" << std::endl;
	return ;
}

Brain::Brain(Brain const &src) {

	std::cout << "Constructor Brain copy call" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void) {

	std::cout << "Destructor Brain Default call" << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs) {
	(void)rhs;
	return (*this);
}