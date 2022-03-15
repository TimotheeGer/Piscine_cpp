/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:29:59 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 16:48:40 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

WrongAnimal::WrongAnimal(void) {

	std::cout << "Constructor WrongAnimal Default call" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "Constructor WrongAnimal copy call" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "Destructor WrongAnimal Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void WrongAnimal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

std::string const WrongAnimal::getType(void) const {

	return (this->type);
}
