/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:43:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 23:16:15 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

AForm::AForm(void)
: _name("no_name"), _sign(false), _requierSign(1), _requierExec(1) {

	std::cout << "Construtor Form default called" << std::endl;
	return ;
}

AForm::AForm(std::string name, int requierSign, int requierExec) 
: _name(name), _sign(false), _requierSign(requierSign), _requierExec(requierExec) {

	if (this->_requierSign < 1 || this->_requierExec < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_requierSign > 150 || this->_requierExec > 150)
		throw Bureaucrat::GradeTooLowException ();
	std::cout << "Construtor Form default called" << std::endl;
	return ;
}

AForm::AForm(AForm const &rhs) 
: _name(rhs.get_name()), _sign(rhs.get_sign()), _requierSign(rhs.get_requierSign()), _requierExec(rhs.get_requierExec()) {

	*this = rhs;
	std::cout << "Construtor Form by copy default called" << std::endl;
	return ;
}

AForm::~AForm(void) {
	
	std::cout << "Destrutor Form called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

AForm &AForm::operator=(AForm const &rhs) {

	this->_sign = rhs.get_sign();
	return *this;
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs) {
	
	out	<< rhs.get_name() 
		<< " requier grade [" << rhs.get_requierSign() << "] for Sign" 
		<< " and requier grade [" << rhs.get_requierExec() << "] for Execute";
	if (rhs.get_sign())
		std::cout << ", this AForm is Signed by [" << rhs.get_nameSign() << "]";
	else
		std::cout << ", this AForm is not Signed";
	return out;	
}

// ************************************************************************** //
//                          Member Accessor Fonction                          //
// ************************************************************************** //

	std::string AForm::get_name(void) const {

		return this->_name;
	}
	
	std::string AForm::get_nameSign(void) const {

		return this->_nameAsSign;
	}

	std::string AForm::get_target(void) const {

		return this->_target;
	}

	int AForm::get_requierSign(void) const {

		return this->_requierSign;
	}
	
	int AForm::get_requierExec(void) const {

		return this->_requierExec;
	}
	
	bool AForm::get_sign(void) const {

		return this->_sign;
	}

	void AForm::set_sign(bool b) {
		
		this->_sign = b;
		return ;
	}
	void AForm::set_nameAsSign(std::string name) {

		this->_nameAsSign = name;
		return ;
	}
		
// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

	void AForm::beSigned(Bureaucrat const &staff) {
		
		if (staff.getGrade() > this->get_requierSign())
			throw AForm::GradeTooLowException ();
		else
		{
			this->_sign = true;	
			this->_nameAsSign = staff.getName();
		}
		return ;
	}

	bool AForm::execute(Bureaucrat const & executor) const {

		if (this->get_sign() == false)
			throw AForm::FormSignedException();
		if (executor.getGrade() > this->get_requierExec())
			throw AForm::GradeTooLowException();
		return (true);
	}

// ************************************************************************** //
//                               Fonction Exception                           //
// ************************************************************************** //

const char* AForm::GradeTooHighException::what() const throw() {

	return ("* Form Gradetoo high *");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("* Form Grade too low *");
}

const char* AForm::FormSignedException::what() const throw()
{
	return ("* Form is not Signed *");
}