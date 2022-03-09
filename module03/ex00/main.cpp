#include "ClapTrap.hpp"

int main()
{
	ClapTrap theo = ClapTrap("theo");
	ClapTrap tim("tim");
	ClapTrap theoBis(theo);
	ClapTrap timBis;
	timBis = tim;

	std::cout << "theo = " << theo.get_name() << std::endl; 
	std::cout << "tim = " << tim.get_name() << std::endl; 
	std::cout << "theoBis = " << theoBis.get_name() << std::endl; 
	std::cout << "timBis = " << timBis.get_name() << std::endl;

	theo.attack("tom");
	
	theo.get_status(); 
	tim.get_status(); 
	
	tim.beRepaired(50);
	
	tim.get_status();
	return (0);
}