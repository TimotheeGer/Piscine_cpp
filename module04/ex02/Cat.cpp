/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:00 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 22:44:08 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	this->cerv = new Brain();

	AAnimal::type = "Cat";

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

Cat &Cat::operator=(Cat const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}

std::string const Cat::getType2(void) const {

	return (this->type);
}
