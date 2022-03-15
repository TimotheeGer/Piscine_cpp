/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:58:12 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 15:37:38 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

FragTrap::FragTrap(void) {
	
	this->_name = "no_name";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Constructor FragTrap " << this->_name << " has been called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) {
	
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Constructor FragTrap " << this->_name << " has been called" << std::endl;
	return ;
}


FragTrap::FragTrap(FragTrap const &src) {

	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {

	std::cout << "Destructor FragTrap " << this->_name << " has been called" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Operator d'assignation                             //
// ************************************************************************** //

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

// ************************************************************************** //
//                         Fonctions Membres                                  //
// ************************************************************************** //

void FragTrap::attack(const std::string &target) {

	if (this->_energy_points)
	{
		std::cout << "FragTrap " << this->_name 
				  << " attacks " << target 
				  << ", causing " << this->_attack_damage
				  << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "FragTrap " <<  this->_name << "Cannot attack" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "FragTrap " << this->_name << " high five ?" << std::endl;
	return ;
}		
