/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:44:30 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:44:31 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string arme ) {

	this->_type = arme;
	return ;
}

Weapon::~Weapon( void ) {

	return ;
}

const std::string &Weapon::getType() {

	std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType( std::string str ) {

	this->_type = str;
	return ;
}
