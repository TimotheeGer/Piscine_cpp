#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

	public:

		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal &operator=(AAnimal const &rhs);
		virtual void makeSound(void) const = 0;
		virtual std::string const getType(void) const = 0;

	protected:

		std::string type;

	private:


};

#endif