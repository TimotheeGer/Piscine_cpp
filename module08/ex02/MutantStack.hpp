#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:
			MutantStack( void ) {

				return ;
			}
			MutantStack( MutantStack<T> const &src ) {

				*this = src;
				return ;
			}

			MutanStack &operator=( MutanStack<T> const &rhs ) {

				this->c = rhs.c;
				return *this;
			}

			~MutantStack( void ) {

				return ;
			}

			typedef typename std::stack<T>::container_type::iterator iterator; 	// typedef . typename
			iterator begin()
			{
				return this->c.begin();
			}

			iterator end()
			{
				return this->c.end();
			}
};

#endif