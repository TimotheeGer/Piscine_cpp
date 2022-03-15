#include "DiamondTrap.hpp"

int main() {

	DiamondTrap tim("tim");
	DiamondTrap theo = DiamondTrap("theo");

	std::cout << std::endl;

	tim.whoAmI();
	tim.highFivesGuys();
	tim.guardGate();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.get_status();

	theo.whoAmI();
	theo.takeDamage(20);
	theo.get_status();
	theo.highFivesGuys();
	
	std::cout << std::endl;
	
	return (0);
}