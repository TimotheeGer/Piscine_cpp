/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:24:06 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 22:47:21 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

	{
		std::cout << std::endl << "----------------test1------------------" << std::endl << std::endl;
		const AAnimal *pet[4];

		for (int i = 0; i < 4;)
		{
			std::cout << "*instantion dog* " << i + 1 << std::endl;
			pet[i++] = new Dog();
			std::cout << "*instantion cat* " << i + 1 << std::endl;
			pet[i++] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 4;)
		{
			pet[i++]->makeSound();
			pet[i++]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 4;)
		{
			std::cout << "*delete* " << i + 1 << std::endl;
			delete pet[i];
			i++;
		}
	}

	// {

	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;//should not create a leak
	// 	delete i;

	// 	return 0;
	// }
}