#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << std::endl << "----------------test0------------------" << std::endl << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;
		delete i;
	}

	{
		std::cout << std::endl << "----------------test1------------------" << std::endl << std::endl;
		const Animal* pet[10];

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
		
		Animal* dog = new Dog();
		Animal* cat = new Cat();
		
		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();
		
		std::cout << std::endl;
		
		cat->add_ideas("eat");
		cat->add_ideas("play");
		cat->add_ideas("sleep");
		cat->get_all_ideas();
		cat->clear_all_ideas();
		cat->get_all_ideas();
		
		std::cout << std::endl;
		
		delete dog;
		delete cat;
		return 0;
	}
	return 0;
}