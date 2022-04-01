/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:01:13 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/01 13:09:30 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Convert::Convert( void ) {

	return ;
}

Convert::Convert( std::string conv ) : _value(conv) {

	return ;
}


Convert::Convert( Convert const &src ) {

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

char const Convert::getChar() {

	 return this->_char;
}

int const Convert::getInt() {

	 return this->_int;
}

float const Convert::getFloat() {

	 return this->_float;
}

double const Convert::getDouble() {

	 return this->_double;
}
