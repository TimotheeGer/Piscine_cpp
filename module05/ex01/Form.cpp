/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:43:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 22:06:26 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Form::Form(void)
: _name("no_name"), _sign(false), _requierSign(1), _requierExec(1) {

	std::cout << "Construtor Form default called" << std::endl;
	return ;
}

Form::Form(std::string name, int requierSign, int requierExec) 
: _name(name), _sign(false), _requierSign(requierSign), _requierExec(requierExec) {

	std::cout << "Construtor Form default called" << std::endl;
	return ;
}

Form::Form(Form const &rhs) 
: _name(rhs.get_name()), _sign(rhs.get_sign()), _requierSign(rhs.get_requierSign()), _requierExec(rhs.get_requierExec()) {

	*this = rhs;
	std::cout << "Construtor Form by copy default called" << std::endl;
	return ;
}

Form::~Form(void) {
	
	std::cout << "Desstrutor Form called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operator                           //
// ************************************************************************** //

Form &Form::operator=(Form const &rhs) {

	this->_sign = rhs.get_sign();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form const &rhs) {
	
	out	<< "Form " << rhs.get_name() 
		<< " requier grade [" << rhs.get_requierSign() << "] for Sign" 
		<< " and requier grade [" << rhs.get_requierExec() << "] for Execute";
	if (rhs.get_sign())
		std::cout << ", this Form is Signed by [" << rhs.get_nameSign() << "]";
	else
		std::cout << ", this Form is not Signed";
	return out;	
}


// ************************************************************************** //
//                               Member Geter Fonction                        //
// ************************************************************************** //

	std::string Form::get_name(void) const {

		return this->_name;
	}
	
	std::string Form::get_nameSign(void) const {

		return this->_nameAsSign;
	}

	int Form::get_requierSign(void) const {

		return this->_requierSign;
	}
	
	int Form::get_requierExec(void) const {

		return this->_requierExec;
	}
	
	bool Form::get_sign(void) const {

		return this->_sign;
	}

// ************************************************************************** //
//                               Member Fonction                              //
// ************************************************************************** //

	void Form::beSigned(Bureaucrat const &staff) {
		
		if (staff.getGrade() >= this->get_requierSign() && staff.getGrade() < 0)
			throw Bureaucrat::GradeTooLowException ();
		else
		{
			this->_sign = true;	
			this->_nameAsSign = staff.getName();
		}
		return ;
	}

