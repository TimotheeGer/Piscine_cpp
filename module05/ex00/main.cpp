#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	Bureaucrat greg();

	try
	{
		Bureaucrat theo = Bureaucrat("theo", 151);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tim = Bureaucrat("tim", 152);

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat laura("laura", 1);

	try
	{
		laura.decrem();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	// // try
	// {
	// 	tim.increm();
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}