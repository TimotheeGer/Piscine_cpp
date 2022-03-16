#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	public:

		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal &operator=(Animal const &rhs);
		virtual void makeSound(void) const;
		std::string const getType(void) const;
		virtual void add_ideas(std::string ideas);
		virtual void get_all_ideas(void) const;
		virtual void clear_all_ideas(void) const;

	protected:

		std::string type;

	private:


};

#endif