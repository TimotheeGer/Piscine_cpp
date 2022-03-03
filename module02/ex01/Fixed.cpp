/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:29:38 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/03 16:40:47 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Fixed::Fixed( void ) : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const int_num ) {

	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = int_num * (1 << Fixed::_stockBits);
	std::cout << "raw = " << this->_rawBits << std::endl;
	return ;
}

Fixed::Fixed( float const float_num ) {

	(void)float_num;
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(float_num * (1 << Fixed::_stockBits));	
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

// ************************************************************************** //
//                         Surcharge d'operateur                              //
// ************************************************************************** //

Fixed &Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

// ************************************************************************** //
//                           Fonction accesor                                 //
// ************************************************************************** //

int Fixed::getRawBits( void ) const {

	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
	return ;
}

// ************************************************************************** //
//                            Fonction membre                                 //
// ************************************************************************** //

float Fixed::toFloat( void ) const {

	return ((float)this->_rawBits / (1 << this->_stockBits));
}

int	Fixed::toInt( void ) const {

	return (this->_rawBits / (1 << this->_stockBits));
}

// ************************************************************************** //
//                            Surcharge operator <<                           //
// ************************************************************************** //

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}

int const Fixed::_stockBits = 8;
