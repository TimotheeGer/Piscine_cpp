/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:28:46 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/14 14:04:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Fixed::Fixed( void ) {

	this->_rawBits = 0;
	return ;
}


Fixed::Fixed( int const int_num ) {

	this->_rawBits = int_num * (1 << _stockBits);
	return ;
}

Fixed::Fixed( float const float_num ) {

	this->_rawBits = roundf(float_num * (1 << _stockBits));
	return ;
}

Fixed::Fixed( Fixed const &src ) {

	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	return ;
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

	return ((float)(this->_rawBits) / (1 << this->_stockBits));
}

int	Fixed::toInt( void ) const {

	return (this->_rawBits / (1 << this->_stockBits));
}

// ************************************************************************** //
//                        Fonction membre surcharger                          //
// ************************************************************************** //

Fixed &Fixed::min ( Fixed  &a, Fixed  &b ) {
	
	if (a._rawBits < b._rawBits)
		return (a);
	return (b);
}

Fixed &Fixed::max ( Fixed  &a, Fixed  &b ) {

	if (a._rawBits > b._rawBits)
		return (a);
	return (b);
}

Fixed const &Fixed::min( Fixed const &a, Fixed const &b ) {

	if (a._rawBits < b._rawBits)
		return (a);
	return (b);
}

Fixed const &Fixed::max( Fixed const &a, Fixed const &b ) {

	if (a._rawBits > b._rawBits)
		return (a);
	return (b);
}

// ************************************************************************** //
//                         Surcharge d'operateur/assination                   //
// ************************************************************************** //

Fixed &Fixed::operator=( Fixed const &rhs ) {

	this->_rawBits = rhs.getRawBits();
	return (*this);
}

// ************************************************************************** //
//                         Surcharge d'operateur/arithmétiques                //
// ************************************************************************** //

Fixed Fixed::operator+( Fixed const &rhs ) {

	Fixed res;

	res.setRawBits(this->_rawBits + rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator-( Fixed const &rhs ) {

	Fixed res;

	res.setRawBits(this->_rawBits - rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator*( Fixed const &rhs ) {

	Fixed res;

	res.setRawBits(this->_rawBits * rhs.getRawBits() / (1 << _stockBits));
	return (res);
}

Fixed Fixed::operator/( Fixed const &rhs ) {

	Fixed res;

	res.setRawBits(this->_rawBits / rhs.getRawBits() * (1 << _stockBits));
	return (res);
}

// ************************************************************************** //
//                         Surcharge d'operateur/comparaison                  //
// ************************************************************************** //

bool Fixed::operator>( Fixed const &rhs ) {

	return (this->_rawBits > rhs.getRawBits());
}

bool Fixed::operator<( Fixed const &rhs ) {

	return (this->_rawBits < rhs.getRawBits());
}

bool Fixed::operator>=( Fixed const &rhs ) {

	return (this->_rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=( Fixed const &rhs ) {

	return (this->_rawBits <= rhs.getRawBits());
}

bool Fixed::operator==( Fixed const &rhs ) {

	return (this->_rawBits == rhs.getRawBits());
}

bool Fixed::operator!=( Fixed const &rhs ) {

	return (this->_rawBits != rhs.getRawBits());
}

// ************************************************************************** //
//         Surcharge d'operateur/incrémentation & décrémentation              //
// ************************************************************************** //

Fixed &Fixed::operator++( void ) {

	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++( int ) {

	Fixed res(*this);
	this->_rawBits++;
	return (res);
}

Fixed &Fixed::operator--( void ) {

	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--( int ) {

	Fixed res(*this);
	this->_rawBits--;
	return (res);
}

// ************************************************************************** //
//                            Surcharge operator << flux                      //
// ************************************************************************** //

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}

// ************************************************************************** //
//                                Attribue static                             //
// ************************************************************************** //

int const Fixed::_stockBits = 8;
