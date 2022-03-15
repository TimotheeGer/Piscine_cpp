/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:10:30 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 14:38:03 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

DiamondTrap::DiamondTrap(void) {
	
	this->_name = "no_name";
	ClapTrap::_name = "no_name_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "Constructor DiamondTrap " << this->_name << " has been called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) {

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "Constructor DiamondTrap " << this->_name << " has been called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {

	*this = src;
	std::cout << "Constructor DiamondTrap by copie " << this->_name << " has been called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	
	std::cout << "Destructor DiamondTrap " << this->_name << " has been called" << std::endl;
	return ;
}

// ************************************************************************** //
//                           Fonction Membre                                  //
// ************************************************************************** //

void DiamondTrap::attack(const std::string &target) {
	
	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI(void) {

	std::cout << "My Diamond name is " << this->_name << " and my clap name is " << ClapTrap::_name <<  std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}
