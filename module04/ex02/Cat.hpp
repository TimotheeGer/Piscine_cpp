#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	public:

		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);

		Cat &operator=(Cat const &rhs);
		virtual void makeSound(void) const;

	protected:

	private:

		Brain *cerv;

};

#endif