/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:32 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 21:23:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {

	std::cout << "Constructor AAnimal Default call" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src) {

	std::cout << "Constructor AAnimal copy call" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void) {

	std::cout << "Destructor AAnimal Default call" << std::endl;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}


void AAnimal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

std::string const AAnimal::getType(void) const {

	return (this->type);
}
