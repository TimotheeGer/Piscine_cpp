#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>

class Array {

	public :
		Array<T>( void );
		Array<T>( unsigned int n );
		Array<T>( Array const &src );
		Array<T> &operator=( Array const &rhs );


		int size( void );

	private:
		unsigned int _n;
		T *_tab;
};

#include "Array.tpp"


#endif