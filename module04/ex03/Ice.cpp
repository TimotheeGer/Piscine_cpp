/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:25:19 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 08:25:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

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

Ice &Ice::operator=(Ice const &rhs) {

	AMateria::type = rhs.type;
	return (*this);
}

Ice *Ice::clone() const {

	Ice *clone = new Ice();
	return (clone);
}
