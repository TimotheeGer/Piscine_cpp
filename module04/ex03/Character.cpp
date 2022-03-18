/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:19:32 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 11:12:19 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Character::Character( void ) : _name("no_name"){

	for (int i = 0; i < 4; i++)
		this->item[i] = NULL;
	std::cout << "Constructor default " << this->_name << " Character call" << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name) {

	for (int i = 0; i < 4; i++)
		this->item[i] = NULL;
	std::cout << "Constructor " << this->_name << " Character call" << std::endl;
	return ;
}


Character::Character( Character const &src ) {

	std::cout << "Constructor " << this->_name << " Character copy call" << std::endl;
	*this = src;
	return ;
}

Character::~Character( void ) {

	for (int i = 0; i < 4; i++)
	{
		// if (this->item[i])
		// 	delete this->item[i];
	}
	std::cout << "Destructor " << this->_name << " Character" << std::endl;
	return ;
}

// ************************************************************************** //
//                          Assignement Operator                      	 	  //
// ************************************************************************** //

Character &Character::operator=( Character const &rhs ) {

	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->item[i])
			this->item[i] = rhs.item[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (rhs.item[i])
			delete rhs.item[i];
	}
	return (*this);
}

// ************************************************************************** //
//                               Member Function                          	  //
// ************************************************************************** //


std::string const &Character::getName() const {

	return (this->_name);
}

void Character::equip(AMateria *m) {

	if (m == NULL)
	{
		std::cout << "this Materia in inventary's " << this->_name << " does not exist" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->item[i])
		{
			this->item[i] = m;
			std::cout << this->_name << " equip Materia [" << this->item[i]->getType()
			  		  << "] from inventory[" << i << "]" <<std::endl;
			return ;
		}
	}
	std::cout << "Inventory's " << this->_name << " is full" << std::endl;
	return ;
}

void Character::unequip(int idx) {

	if (idx > 3 || idx < 0 || !this->item[idx])
	{
		std::cout << "Index's " << this->_name << " does not exist" << std::endl;
		return ;
	}
	std::cout << this->_name << " Unequip Materia [" << this->item[idx]->getType()
			  << "] from inventory[" << idx << "]" <<std::endl;
	this->item[idx] = NULL;
	return ;
}


void Character::use(int idx, ICharacter& target) {

	if (idx > 3 || idx < 0 || !this->item[idx])
	{
		std::cout << "Index[" << idx << "] does not exist" << std::endl;
		return ;
	}
	this->item[idx]->use(target);
	return ;
}
