/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:09:41 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/08 18:21:21 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>

class Array {

	public :
	
		Array( void ) : _n(0), _tab(new T[0]) { };
		Array( unsigned int n ) : _n(n), _tab(new T[n]) { };
		Array( Array const &src ) { *this = src };
		
		Array &operator=( Array const &rhs ) { 
			
			if (_tab != NULL)
				delete [] this->_tab;
			this->_n = rhs._n;
			this->_tab = new T[rhs._n];
			for (int i = 0; i < rhs._n; i++)
				this->_tab[i] = rhs._tab[i];
			return *this;
		};

		T &operator[](unsigned int i) {

			if (i >= this->_n)
				throw (SegmentationFaultAttempt());
			else
				return this->_tab[i];
		}
		
		class SegmentationFaultAttempt : public std::exception {
			
			virtual const char *what() const throw() {
				
				return("Out of bounds");
			}
		};
		
		unsigned int size( void ) {
			
			return (this->_n);
		};

	private:
	
		unsigned int _n;
		T *_tab;
};

#endif
