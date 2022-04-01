#include "Convert.hpp"


int main (int ac, char **av) {

	if (ac != 2)
	 	return 0;

	Convert a(av[1]);
	a.checkWhichConvert();

	// std::string name = "'";
	// char c;
	// int i;
	// float f;
	// double d;

	// c = 127;
	// i = static_cast<int>(c);
	// f = static_cast<float>(c);
	// d = static_cast<double>(c);
	// std::string name = "salut12";

	// std::cout << c << std::endl;
	// std::string name2 = "0";

	// std::string name3 = "12,45";

	// std::string name4 = "12.45";

	// // ft_stoi(name);

	// std::cout << "stoi(name) " << c << std::endl;
	// std::cout << "stoi(name2) " << i  << std::endl;
	// std::cout << "stoi(name3) " <<  f << 'f' << std::endl;
	// std::cout << "stoi(name4) " << d;
	// if (1)
	// 	std::cout << ".0" << std::endl;
	// else
	//  	std::cout << std::endl;
	return 0;
}