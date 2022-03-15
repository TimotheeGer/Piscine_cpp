#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

	{
		std::cout << std::endl << "----------------test1------------------" << std::endl << std::endl;
		const Animal *pet[10];

		for (int i = 0; i < 10;)
		{
			std::cout << "*instantion dog* " << i + 1 << std::endl;
			pet[i++] = new Dog();
			std::cout << "*instantion cat* " << i + 1 << std::endl;
			pet[i++] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10;)
		{
			pet[i++]->makeSound();
			pet[i++]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10;)
		{
			std::cout << "*delete* " << i + 1 << std::endl;
			delete pet[i];
			i++;
		}
	}

	{
		std::cout << std::endl << "----------------test2------------------" << std::endl << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		j->makeSound();
		i->makeSound();

		delete j;//should not create a leak
		delete i;
		return 0;
	}
}