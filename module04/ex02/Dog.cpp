/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:13 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 21:23:14 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->cerv = new Brain();

	AAnimal::type = "Dog";

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

Dog &Dog::operator=(Dog const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}

std::string const Dog::getType(void) const {

	return (this->type);
}
