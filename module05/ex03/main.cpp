/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:56:35 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 22:49:45 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	std::cout << "-------------------Test ShrubberyCreationForm----------------------" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 14);
		std::cout << tim << std::endl;
		AForm *garden = new ShrubberyCreationForm("Garden");
		std::cout << *garden << std::endl;
		std::cout << std::endl;
		
		garden->beSigned(tim);
		tim.signForm(*garden);
		std::cout << *garden << std::endl;
		tim.executeForm(*garden);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-------------------Test RobotomyRequestForm------------------------" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 14);
		std::cout << tim << std::endl;
		AForm *robot = new RobotomyRequestForm("theo");
		std::cout << *robot << std::endl;
		std::cout << std::endl;

		robot->beSigned(tim);
		tim.signForm(*robot);
		std::cout << *robot << std::endl;
		tim.executeForm(*robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-------------------Test PresidentialPardonForm---------------------" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 4);
		std::cout << tim << std::endl;
		AForm *pardon = new PresidentialPardonForm("theo");
		std::cout << *pardon << std::endl;
		std::cout << std::endl;

		pardon->beSigned(tim);
		tim.signForm(*pardon);
		std::cout << *pardon << std::endl;
		tim.executeForm(*pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------Test Intern------------------------------" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 1);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		
		rrf->beSigned(tim);
		tim.signForm(*rrf);
		std::cout << *rrf << std::endl;
		tim.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}