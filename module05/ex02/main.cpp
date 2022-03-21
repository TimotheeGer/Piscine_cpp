#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	try
	{
		Bureaucrat tim("Tim", 50);
		Form poleE("PoleE", 10, 25);
		poleE.beSigned(tim);
		tim.signForm(poleE);
		std::cout << tim << std::endl;
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}