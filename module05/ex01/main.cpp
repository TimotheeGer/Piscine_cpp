#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	try
	{
		Bureaucrat tim("Tim", 50);
		std::cout << tim << std::endl;
		Form poleE("PoleE", 10, 25);
		std::cout << poleE << std::endl;
		tim.signForm(poleE);
		poleE.beSigned(tim);
		tim.signForm(poleE);
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat theo("Theo", 5);
		std::cout << theo << std::endl;
		Form poleE("PoleE", 10, 25);
		std::cout << poleE << std::endl;
		poleE.beSigned(theo);
		theo.signForm(poleE);
		std::cout << poleE << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}