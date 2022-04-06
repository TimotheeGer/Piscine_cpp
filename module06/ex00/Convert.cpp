/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:01:13 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/06 17:08:00 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Convert::Convert( void ) {

	this->_char = 0;
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
	return ;
}

Convert::Convert( std::string conv ) : _value(conv) {
	
	this->_char = 0;
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
	return ;
}


Convert::Convert( Convert const &src ) {
	
	*this = src;
	return ;
}


Convert::~Convert( void ) {

	return ;
}

// ************************************************************************** //
//                               Surcharge Operateur                          //
// ************************************************************************** //

Convert &Convert::operator=( Convert const &rhs ) {

	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	return *this;
}

// ************************************************************************** //
//                               Member Fonction accesor                   	  //
// ************************************************************************** //

char Convert::getChar() {

	 return this->_char;
}

int Convert::getInt() {

	 return this->_int;
}

float Convert::getFloat() {

	 return this->_float;
}

double Convert::getDouble() {

	 return this->_double;
}
