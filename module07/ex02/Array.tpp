#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _n(0), _tab(new T[0]) {

}


Array<T>::Array( unsigned int n ) : _n(n), _tab(new T[n]) {

}

Array<T>::Array( Array const &src ) {

	*this = src;
}

Array<T> &operator=( Array const &rhs ) {

	this->_n = rhs._n;
	this->_tab = rhs._tab;
}



#endif