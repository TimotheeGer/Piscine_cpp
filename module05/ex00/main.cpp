/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:18:49 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 13:18:50 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	try
	{
		Bureaucrat theo = Bureaucrat("theo", 25);
		theo.increm();
		std::cout << theo << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tim = Bureaucrat("tim", 152);
		std::cout << tim << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat laura("laura", 1);
	std::cout << laura << std::endl;
	try
	{
		laura.decrem();
		std::cout << laura << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}