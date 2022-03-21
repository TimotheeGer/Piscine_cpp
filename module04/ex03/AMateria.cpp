/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:17:37 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 15:25:11 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

AMateria::AMateria(void) {

	std::cout << "Constructor AMateria Default call" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src) {

	std::cout << "Constructor AMateria copy call" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria(void) {

	std::cout << "Destructor AMateria Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

AMateria &AMateria::operator=(AMateria const &rhs) {

	this->type = rhs.type;

	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //


std::string const &AMateria::getType() const {

	return (this->type);
}

void AMateria::use(ICharacter &target) {

	if (this->type.compare("ice"))
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type.compare("cure"))
		std::cout <<  "* heals "<< target.getName() << "’s wounds *" << std::endl;
	else if (this->type.compare("fire"))
		std::cout << "* throw a fireball at " << target.getName() << " *" << std::endl;
	return ;
}
