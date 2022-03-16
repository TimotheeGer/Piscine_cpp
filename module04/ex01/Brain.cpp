/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:53:46 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 16:40:05 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

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

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Brain &Brain::operator=(Brain const &rhs) {
	
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void Brain::add_ideas(std::string ideas, std::string type) {

	int i;
	for (i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			std::cout << type << " ideas : \"" << ideas << "\" is add!" << std::endl;
			this->ideas[i] = ideas;
			break;
		}
	}
	if (i == 100)
		std::cout << "ideas is full!" << std::endl;
	return ;
}

void Brain::get_all_ideas(std::string type) const {
	
	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			std::cout << type << " ideas[" << i + 1 << "] = "
					  << this->ideas[i] << std::endl;
	}
	if (this->ideas[0].empty())
		std::cout << type << " ideas is empty!" << std::endl;
	return ;
}

void Brain::clear_all_ideas(std::string type) {

	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			this->ideas[i].clear();
	}
	std::cout << type << " ideas is clear!" << std::endl;
	return ;
}

