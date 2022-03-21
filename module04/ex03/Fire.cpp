/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:13:16 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 15:50:06 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fire.hpp"
#include "Character.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Fire::Fire(void) {

	AMateria::type = "fire";
	std::cout << "Constructor Fire Default call" << std::endl;
	return ;
}

Fire::Fire(Fire const &src) {

	std::cout << "Constructor Fire copy call" << std::endl;
	*this = src;
	return ;
}


Fire::Fire(std::string const & type) {

	AMateria::type = type;
	std::cout << "Constructor Fire copy with strings call" << std::endl;
	return ;
}

Fire::~Fire(void) {

	std::cout << "Destructor Fire Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

Fire &Fire::operator=(Fire const &rhs) {

	AMateria::type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

Fire *Fire::clone() const {

	Fire *clone = new Fire();
	return (clone);
}

void Fire::use(ICharacter &target) {

	std::cout << "* throw a fireball at " << target.getName() << " *" << std::endl;
	return ;
}
