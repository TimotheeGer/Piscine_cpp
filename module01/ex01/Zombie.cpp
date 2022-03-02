/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:07 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:49:23 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	return ;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << ": has been destroyed" << std::endl;
	return ;
}

void Zombie::announce ( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::give_name( std::string name ) {

	this->_name = name;
	return ;
}
