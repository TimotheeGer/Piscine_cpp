#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <li§st>
#include <st§ack>
§
template <ty§pename T>
class Mutant§Stack : public std::stack<T> {
§
	public:§
			§MutantStack( void ) {
§
			§	return ;
			§}
			§MutantStack( MutantStack<T> const &src ) {
§
			§	*this = src;
			§	return ;
			§}
§
			§MutanStack &operator=( MutanStack<T> const &rhs ) {
§
			§	this->c = rhs.c;
				return *this;
			}

			~MutantStack( void ) {

				return ;
			}

			typedef typename std::stack<T>::container_type::iterator it; 	// typedef . typename
			it begin()
			{
				return this->c.begin();
			}

			it end()
			{
				return this->c.end();
			}
};

#endif