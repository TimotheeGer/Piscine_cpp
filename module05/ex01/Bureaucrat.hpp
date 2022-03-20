#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
	
	public:

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat( void );

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string getName( void ) const;
		int getGrade( void ) const;
		
		void increm( void );
		void decrem( void );
		void signForm(Form const &form) const;

		class GradeTooHighException  : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:

		std::string _name;
		int 		_grade;




};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif