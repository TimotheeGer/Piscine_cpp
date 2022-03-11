#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:

		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);

		Dog &operator=(Dog const &rhs);
		virtual void makeSound(void) const;

	protected:

	private:

		Brain *cerv;
};

#endif