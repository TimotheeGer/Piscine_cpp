
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		std::cout << "###################test1#########################" << std::endl << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		
		std::cout << std::endl << "-------------------result main default-----------" << std::endl << std::endl;
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		std::cout << std::endl << "-------------------result main default-----------" << std::endl << std::endl;
		
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << "###################test2#########################" << std::endl << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Fire());
		std::cout << "-------------------------------------------------" << std::endl << std::endl;

		ICharacter* me = new Character("me");

		std::cout << "-------------------------------------------------" << std::endl << std::endl;

		AMateria* tmp;
		tmp = src->createMateria("ice");
		
		std::cout << "-------------------------------------------------" << std::endl << std::endl;
		
		me->equip(tmp);
		me->unequip(0);
		
		std::cout << "-------------------------------------------------" << std::endl << std::endl;
		
		tmp = src->createMateria("fire");
		me->equip(tmp);
		
		std::cout << "-------------------------------------------------" << std::endl << std::endl;
		
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		std::cout << "-------------------------------------------------" << std::endl << std::endl;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->equip(tmp);
		
		std::cout << "-------------------------------------------------" << std::endl << std::endl;

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);

		std::cout << "-------------------------------------------------" << std::endl << std::endl;

		delete bob;
		delete me;
		delete src;
		return 0;
	}
}
