#include "DiamondTrap.hpp"

int main() {

	DiamondTrap tim("tim");
	DiamondTrap theo = DiamondTrap("theo");

	tim.whoAmI();
	tim.highFivesGuys();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.get_status();

	theo.whoAmI();
	theo.get_status();
	theo.highFivesGuys();
	return (0);
}