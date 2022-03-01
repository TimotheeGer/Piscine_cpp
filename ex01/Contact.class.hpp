#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact {

	public:

		Contact(void);
		~Contact(void);
		
		void secure_ask(std::string ask, std::string *data);
		void add_in_PhoneBook(int i);
		void print_index(void);
		void print_contact(void);
	
	private:

		int 		index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _darkest_secret;
		std::string	_phone_number;
};

#endif