/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:45:47 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 16:46:41 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Dog::Dog(void) {

	this->cerv = new Brain();

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

	delete this->cerv;
	std::cout << "Destructor Dog Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

Dog &Dog::operator=(Dog const &rhs) {
	
	this->type = rhs.type;
	this->cerv = rhs.cerv;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}

void Dog::add_ideas(std::string ideas) {

	Dog::cerv->add_ideas(ideas, this->type);
	return ;
}

void Dog::get_all_ideas(void) const {

	Dog::cerv->get_all_ideas(this->type);
	return ;
}

void Dog::clear_all_ideas(void) const {

	Dog::cerv->clear_all_ideas(this->type);
	return ;
}
