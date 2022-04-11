/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:09:41 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/11 15:30:19 by tigerber         ###   ########.fr       */
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
		
		Array( Array const &src ) { 
			
			this->_n = src._n;
			this->_tab = new T[src._n];
			for (unsigned int i = 0; i < src._n; i++)
				this->_tab[i] = src._tab[i];
		};

		~Array( void ) { 
			if (this->_tab)
				delete [] this->_tab;

		};
		
		Array &operator=( Array const &rhs ) { 
			
			if (this->_tab)
				delete [] this->_tab;
			this->_n = rhs._n;
			this->_tab = new T[rhs._n];
			for (unsigned int i = 0; i < rhs._n; i++)
				this->_tab[i] = rhs._tab[i];
			return *this;
		};

		T &operator[]( unsigned int i ) {

			if (i >= this->_n)
				throw (exceptionIndexOperator());
			else
				return this->_tab[i];
		}
		
		unsigned int size( void ) const {
			
			return (this->_n);
		};

		class exceptionIndexOperator : public std::exception {
			
			virtual const char *what() const throw() {	

				return("overflow of array");
			}
		};
		
	private:
	
		unsigned int _n;
		T *_tab;
};

#endif
