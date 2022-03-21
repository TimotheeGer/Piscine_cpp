/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:43:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 23:45:25 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("no_name", 145, 137) {

	this->set_sign(false);
	this->set_nameAsSign("no_name");
	this->set_target("no_name");
	std::cout << "Construtor ShrubberyCreationForm default called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	
	this->set_sign(false);
	this->set_nameAsSign("no_name");
	this->set_target("no_name");
	std::cout << "Construtor ShrubberyCreationForm default called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) 
: AForm(rhs.get_name(), rhs.get_requierSign(), rhs.get_requierExec()) {

	*this = rhs;
	std::cout << "Construtor ShrubberyCreationForm by copy default called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
	std::cout << "Destrutor ShrubberyCreationForm called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

	this->set_sign(rhs.get_sign());
	this->set_nameAsSign(rhs.get_nameSign());
	this->set_target(rhs.get_target());
	return *this;
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &rhs) {
	
	out	<< "ShrubberyCreationForm " << rhs.get_name() 
		<< " requier grade [" << rhs.get_requierSign() << "] for Sign" 
		<< " and requier grade [" << rhs.get_requierExec() << "] for Execute";
	if (rhs.get_sign())
		std::cout << ", this ShrubberyCreationForm is Signed by [" << rhs.get_nameSign() << "]";
	else
		std::cout << ", this ShrubberyCreationForm is not Signed";
	return out;	
}

// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

void ShrubberyCreationForm::executeForm(Bureaucrat const & executor) const {
	
	if (this->execute(executor))
	{
		std::string line;
		std::string file_name = this->get_target() + "_shrubbery";
		std::ifstream infile("shrubbery.txt");
		std::ofstream outfile(file_name.c_str());

		if (infile.is_open() && outfile.is_open())
		{
			std::getline(infile, line, '\0');
			outfile << line;
			std::cout << file_name << " file created" << std::endl;
		}
		std::cout << "error file" << std::endl;	
	}
	return ;
}
