/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:25:19 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 15:42:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Ice::Ice(void) {

	AMateria::type = "ice";
	std::cout << "Constructor Ice Default call" << std::endl;
	return ;
}

Ice::Ice(Ice const &src) {

	std::cout << "Constructor Ice copy call" << std::endl;
	*this = src;
	return ;
}


Ice::Ice(std::string const & type) {

	AMateria::type = type;
	std::cout << "Constructor Ice copy with strings call" << std::endl;
	return ;
}

Ice::~Ice(void) {

	std::cout << "Destructor Ice Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

Ice &Ice::operator=(Ice const &rhs) {

	AMateria::type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

Ice *Ice::clone() const {

	Ice *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
