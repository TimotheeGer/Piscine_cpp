/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:42:29 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 16:45:18 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Cat::Cat(void) {

	this->cerv = new Brain();

	Animal::type = "Cat";

	std::cout << "Constructor Cat Default call" << std::endl;
	return ;
}

Cat::Cat(Cat const &src) {

	std::cout << "Constructor Cat copy call" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void) {
	
	delete this->cerv;
	std::cout << "Destructor Cat Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Cat &Cat::operator=(Cat const &rhs) {
	
	this->type = rhs.type;
	this->cerv = rhs.cerv;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void Cat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}

void Cat::add_ideas(std::string ideas) {

	Cat::cerv->add_ideas(ideas, this->type);

	return ;
}

void Cat::get_all_ideas(void) const {

	Cat::cerv->get_all_ideas(this->type);
	return ;
}

void Cat::clear_all_ideas(void) const {

	Cat::cerv->clear_all_ideas(this->type);
	return ;
}
