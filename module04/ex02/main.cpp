/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:24:06 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 21:24:07 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

	{
		int i = 0;
		const AAnimal *pet[10];

		while (i < 10)
		{
			pet[i++] = new Dog();
			pet[i++] = new Cat();
		}
		i = 0;
		while (i < 10)
		{
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