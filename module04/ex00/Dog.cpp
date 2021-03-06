/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:29:51 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 16:44:06 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Dog::Dog(void) {

	Animal::type = "Dog";

	std::cout << "Constructor Dog Default call" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) {

	std::cout << "Constructor Dog copy call" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void) {

	std::cout << "Destructor Dog Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Dog &Dog::operator=(Dog const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}
