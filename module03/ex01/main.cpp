#include "ScavTrap.hpp"

int main() {

	ScavTrap tim("tim");
	ScavTrap theo = ScavTrap("theo");

	tim.guardGate();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.get_status();

	theo.get_status();
	theo.guardGate();
	return (0);
}