/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:45:39 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/09 18:51:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

ClapTrap::ClapTrap(void) : _hit_points(10), _energy_points(10), _attack_damage(0) {
	
	std::cout << "Constructor has been called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	
	std::cout << "Constructor " << this->_name << " has been called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	
	*this = src;
	std::cout << "Constructor by copie " << this->_name << " has been called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {
	
	std::cout << "Destructor " << this->_name << " has been called" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void ClapTrap::attack(const std::string &target) {

	if (this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name 
				  << " attacks " << target 
				  << ", causing " << this->_attack_damage
				  << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "Cannot attack" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->_name 
			  << " get attacked he lost " << amount
		      << " life points!" << std::endl;
	this->_hit_points -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name
				  << "repaired himself, he gain " << amount
				  << " life points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
	else
		std::cout << "Can't repair himself" << std::endl;
	return ;
}

std::string ClapTrap::get_name(void) {
	
	return (this->_name);
}

void ClapTrap::get_status(void) {

			  
	std::cout << "------------------------------------" << std::endl 
			  << this->_name << std::endl
			  << "hit points = " << _hit_points << std::endl
			  << "energy points = " << _energy_points << std::endl
			  << "attack damage = " << _attack_damage << std::endl
			  << "------------------------------------" << std::endl;
	return ;
}
