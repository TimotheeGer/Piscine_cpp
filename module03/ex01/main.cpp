#include "ScavTrap.hpp"

int main() {

	ScavTrap tim("tim");
	ScavTrap theo = ScavTrap("theo");

	tim.get_status();
	tim.guardGate();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.beRepaired(20);
	tim.get_status();
	tim.guardGate();

	theo.get_status();
	theo.guardGate();
	return (0);
}