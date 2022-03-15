#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Constructor Brain Default call" << std::endl;
	return ;
}

Brain::Brain(Brain const &src) {

	std::cout << "Constructor Brain copy call" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void) {

	std::cout << "Destructor Brain Default call" << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs) {
	
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}