/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:43:58 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:44:00 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &axe ) : _type(axe) , _name(name) {

	return ;
}

HumanA::~HumanA( void ) {

	return ;
}

void HumanA::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}
