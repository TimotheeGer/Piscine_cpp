/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:10:00 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 16:41:03 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Bureaucrat::Bureaucrat( void ) : _name("no_name"), _grade(150) {

	std::cout << "Constructor Bureaucrat " << this->_name << " has been called" << std::endl;  
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	std::cout << "Constructor Bureaucrat " << this->_name << " has been called" << std::endl;  
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	*this = src;
	std::cout << "Constructor by copy Bureaucrat " << this->_name << " has been called" << std::endl;  
	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Destructor Bureaucrat has been called" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Surcharge Operateur                          //
// ************************************************************************** //

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

// ************************************************************************** //
//                               Member Fonction                          	  //
// ************************************************************************** //

std::string Bureaucrat::getName( void ) const {

	return this->_name;
}

int Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

void Bureaucrat::increm( void ) {

	this->_grade++;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	return ;
}

void Bureaucrat::decrem( void ) {

	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	return ;
}

void Bureaucrat::signForm(Form const &form) const {

	if (form.get_sign())
		std::cout << this->getName() << " signed " << form.get_name() << std::endl;
	else
		std::cout << this->getName() << " couldn’t sign " << form.get_name() << " because grade "
				  << this->getGrade() << "it's too low" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Exception Member                             //
// ************************************************************************** //

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ("* Grade Bureaucrat too high *");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("* Grade Bureaucrat too low *");
}
