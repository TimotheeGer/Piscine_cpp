#ifndef PhoneBook_CLASS_HPP
# define PhoneBook_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <cstdlib>

class PhoneBook {

	public:
		
		PhoneBook( void );
		~PhoneBook( void );
		
		Contact contacts[8];
		
		void menu_PhoneBook(void);
		void Search_contacts(void);
		int Look_for_contacts( int i );
		int cpp_atoi(std::string str);
};

#endif