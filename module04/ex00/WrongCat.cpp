/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:29:46 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 16:53:40 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

WrongCat::WrongCat(void) {

	WrongAnimal::type = "WrongCat";

	std::cout << "Constructor WrongCat Default call" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src) {

	std::cout << "Constructor WrongCat copy call" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "Destructor WrongCat Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	
	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void WrongCat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}