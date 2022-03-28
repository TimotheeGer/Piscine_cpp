/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:43:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 16:19:18 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("no_name", 72, 45) {

	std::cout << "Construtor RobotomyRequestForm default called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	
	this->set_target(target);
	std::cout << "Construtor RobotomyRequestForm default called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) 
: AForm(rhs.get_name(), rhs.get_requierSign(), rhs.get_requierExec()) {

	*this = rhs;
	std::cout << "Construtor RobotomyRequestForm by copy default called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	
	std::cout << "Destrutor RobotomyRequestForm called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {

	this->set_sign(rhs.get_sign());
	this->set_nameAsSign(rhs.get_nameSign());
	this->set_target(rhs.get_target());
	return *this;
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &rhs) {
	
	out	<< "RobotomyRequestForm " << rhs.get_name() 
		<< " requier grade [" << rhs.get_requierSign() << "] for Sign" 
		<< " and requier grade [" << rhs.get_requierExec() << "] for Execute";
	if (rhs.get_sign())
		std::cout << ", this RobotomyRequestForm is Signed by [" << rhs.get_nameSign() << "]";
	else
		std::cout << ", this RobotomyRequestForm is not Signed";
	return out;	
}

// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

bool RobotomyRequestForm::checkExecute(Bureaucrat const & executor) const {
	
	if (this->get_sign() == false)
		throw AForm::FormSignedException();
	if (executor.getGrade() > this->get_requierExec())
		throw AForm::GradeTooLowException();
	return (true);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
	srand(time(NULL));
	int random = rand() % 2;
	
	if (this->checkExecute(executor))
	{
		if (random == 0)
		{
			std::cout << "Brrrrrrrrrrrrrrrrbrrrrr!!!!! " << this->get_target() << " has been Robotize by " << executor.getName() << std::endl;
		}
		else
			std::cout << executor.getName() << " failed the operation of Robotomy" << std::endl;	
	}
	else
		std::cout << "Error " << executor.getName() << " couldn't execute Form " << this->get_name();
	return ;
}
