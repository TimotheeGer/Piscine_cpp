/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:44:12 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:44:13 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string str ) {

	this->_name = str;

	return ;
}

HumanB::~HumanB( void ) {

	return ;
}

void HumanB::setWeapon(Weapon &axe)
{
	this->_type = &axe;
}

void HumanB::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}
