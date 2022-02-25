#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact {

	public:

		Contact(void);
		~Contact(void);
		
		void add_in_phonebook(int i);
		void print_index(void);
		void print_contact(void);
	
	private:

		int 		index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string	phone_number;

};

#endif