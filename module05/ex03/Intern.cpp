/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:48:33 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 22:48:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Intern::Intern(void) {
	
	std::cout << "Intern Constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const &src) {
	
	*this = src;
	std::cout << "Intern by copy Constructor called" << std::endl;
	return ;
}

Intern::~Intern(void) {

	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

Intern& Intern::operator=(Intern const &rhs) {

	(void)rhs;
	return *this;
}

// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

AForm* Intern::makeForm(std::string name_form, std::string target) {

	std::string forms[3] = {
				
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i;
	for (i = 0; i < 3; i++)
		if (name_form.compare(forms[i]) == 0)
			break ;		
	switch (i)
	{
		case 0:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
			break ;

		case 1:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
			break ;
		
		case 2:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
			break ;
		
		default :
			throw Intern::FormDoesNotExist();
			std::cout << "Intern can not create because the form does not exist" << std::endl;
	}
	return NULL;
}

// ************************************************************************** //
//                               Fonction Exception                           //
// ************************************************************************** //

const char* Intern::FormDoesNotExist::what() const throw() {

	return ("* Intern : The form does not exist *");
}