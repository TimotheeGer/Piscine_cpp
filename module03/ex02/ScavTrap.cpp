/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:01:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/10 15:00:59 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ScavTrap::ScavTrap(void) {
	
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Constructor ScavTrap has been called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Constructor ScavTrap " << this->_name << " has been called" << std::endl;
	return ;
}


ScavTrap::ScavTrap(ScavTrap const &src) {

	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Destructor ScavTrap " << this->_name << " has been called" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void ScavTrap::attack(const std::string &target) {

	if (this->_energy_points)
	{
		std::cout << "ScavTrap " << this->_name 
				  << " attacks " << target 
				  << ", causing " << this->_attack_damage
				  << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "Cannot attack" << std::endl;
	return ;
}

void ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << this->_name << " mode Gate keeper" << std::endl;
	return ;
}		
