#include "FragTrap.hpp"

int main() {

	FragTrap tim("tim");
	FragTrap theo = FragTrap("theo");

	tim.highFivesGuys();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.get_status();

	theo.get_status();
	theo.highFivesGuys();
	return (0);
}