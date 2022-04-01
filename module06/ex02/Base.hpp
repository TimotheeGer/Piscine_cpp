#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base {

	public:
		virtual ~Base( void );

};

Base *generate(void);

void identify(Base* p);

void identify(Base& p);

#endif