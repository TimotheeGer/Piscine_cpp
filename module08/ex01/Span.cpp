/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:04:35 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/13 18:46:52 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Span::Span ( void ) { }

Span::Span( unsigned int n ) : _n(n) { }

Span::Span( Span const &src ) { *this = src; }

Span::~Span ( void ) { }

// ************************************************************************** //
//                               Surcharge Operateur                          //
// ************************************************************************** //

Span &Span::operator=( Span const &rhs ) {

	this->_n = rhs._n;
	this->vec = rhs.vec;
	return *this;
}

// ************************************************************************** //
//                               Fontion Membre                            	  //
// ************************************************************************** //

void Span::addNumber( int num ) {

	if (vec.size() == _n)
		throw Span::notAdd();
	vec.push_back(num);
	return ;
}

int Span::shortestSpan( void ) {

	std::vector<int> tmp = vec;
	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notInterval();

	sort(tmp.begin(), tmp.end());
	
	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();
	std::vector<int>::const_iterator itn = ++tmp.begin();

	int small = *itn - *itb;
		
	while (itb != ite && itn != ite)
	{
		if (*itn - *itb < small)
			small = *itn - *itb;			
		itb++;
		itn++;
	}
	if (small == 0)
		throw Span::notInterval();
	return small;
}


int Span::longestSpan( void ) {

	std::vector<int> tmp = vec;

	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notInterval();
	
	sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = --tmp.end();

	if (*ite - *itb == 0)
		throw Span::notInterval();
	return (*ite - *itb);
}

void Span::addRandomNumber(void) {

	int size = vec.size();
	if (vec.size() == _n)
		throw Span::notAdd();
	srand (time(NULL));
	
	vec.resize(_n);
	std::vector<int>::iterator ite = vec.begin();
	std::advance(ite, size);	
	std::generate(ite, vec.end(), std::rand);
}

void Span::printSpan(void) {
	
	std::cout << "-------------------------------------------------------------- Span --------------------------------------------------------------";
	for (unsigned long i = 0; i < vec.size(); i++)
	{
		if (i % 10 == 0)
			std::cout << std::endl;
		std::cout << "[ " << vec[i] << " ]"; 	
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Exception                              	  //
// ************************************************************************** //

const char *Span::notAdd::what() const throw() {

	return ("Span is full error add number");
}

const char *Span::notInterval::what() const throw() {

	return ("No interval in span");
}
