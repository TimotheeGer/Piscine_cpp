/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:46:03 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 11:45:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "------------constructor------------" << std::endl << std::endl; 
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();
	
	std::cout << std::endl << "------------animal type------------" << std::endl << std::endl; 
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	
	std::cout << std::endl << "------------animal sound-----------" << std::endl << std::endl; 
	
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	wrong->makeSound();

	std::cout << std::endl << "------------delete destructor------" << std::endl << std::endl; 
	
	delete meta;
	delete i;
	delete j;
	delete wrong;
	return 0;
}