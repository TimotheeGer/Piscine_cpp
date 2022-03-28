/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:29:47 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 17:02:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("no_name", 25, 5) {

	std::cout << "Construtor PresidentialPardonForm default called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	
	this->set_target(target);
	std::cout << "Construtor PresidentialPardonForm default called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) 
: AForm(rhs.get_name(), rhs.get_requierSign(), rhs.get_requierExec()) {

	*this = rhs;
	std::cout << "Construtor PresidentialPardonForm by copy default called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	
	std::cout << "Destrutor PresidentialPardonForm called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {

	this->set_sign(rhs.get_sign());
	this->set_nameAsSign(rhs.get_nameSign());
	this->set_target(rhs.get_target());
	return *this;
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &rhs) {
	
	out	<< "PresidentialPardonForm " << rhs.get_name() 
		<< " requier grade [" << rhs.get_requierSign() << "] for Sign" 
		<< " and requier grade [" << rhs.get_requierExec() << "] for Execute";
	if (rhs.get_sign())
		std::cout << ", this PresidentialPardonForm is Signed by [" << rhs.get_nameSign() << "]";
	else
		std::cout << ", this PresidentialPardonForm is not Signed";
	return out;	
}

// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

bool PresidentialPardonForm::checkExecute(Bureaucrat const & executor) const {
	
	if (this->get_sign() == false)
		throw AForm::FormSignedException();
	if (executor.getGrade() > this->get_requierExec())
		throw AForm::GradeTooLowException();
	return (true);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (this->checkExecute(executor))
		std::cout << this->get_target() << " was forgiven by Zaphod Beeblebrox" << std::endl;
	else
		std::cout << "Error " << executor.getName() << " couldn't execute Form " << this->get_name();
	return ;
}
