/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:26:23 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 11:02:27 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

MateriaSource::MateriaSource(void)  {

	std::cout << "Constructor MateriaSource Default call" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

	std::cout << "Constructor MateriaSource copy call" << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void) {
	
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
	std::cout << "Destructor MateriaSource Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			this->materia[i] = rhs.materia[i];
	}
	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

bool MateriaSource::checkType(std::string type) {

	if (type.compare("ice") == 0) {
		return (true);
	}
	else if (type.compare("cure") == 0)
		return (true);
	// else if (type.compare("fire"))
		// return (true);
	// else if (type.compare("wind"))
		// return (true);
	else
	{
		std::cout << "This Materia [" << type << "] does not exist" << std::endl;
		return (false);
	}
}

void MateriaSource::learnMateria(AMateria* type) {

	if (!checkType(type->getType()))
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = type;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
	for (int i = 0; i < 4 && this->materia[i]; i++)
	{
		if (this->materia[i]->getType().compare(type) == 0)
			return (this->materia[i]->clone());
	}
	std::cout << "this materia [" << type << "] not found" << std::endl;
	return NULL;
 }
