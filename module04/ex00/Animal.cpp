/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:29:59 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 11:45:02 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Animal::Animal(void) {

	this->type = "no_type";
	std::cout << "Constructor Animal Default call" << std::endl;
	return ;
}

Animal::Animal(Animal const &src) {

	std::cout << "Constructor Animal copy call" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void) {

	std::cout << "Destructor Animal Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Animal &Animal::operator=(Animal const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void Animal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

std::string const Animal::getType(void) const {

	return (this->type);
}
