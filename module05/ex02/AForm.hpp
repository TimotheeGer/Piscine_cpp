/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:42:11 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 15:21:05 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:

		AForm(std::string name, int requierSign, int requierExec);
		AForm(AForm const &src);
		~AForm(void);

		AForm &operator=(AForm const &rhs);

		std::string get_name(void) const;
		std::string get_nameSign(void) const;
		std::string get_target(void) const;
		int get_requierSign(void) const;
		int get_requierExec(void) const;
		bool get_sign(void) const;
		
		void set_sign(bool b);
		void set_nameAsSign(std::string name);
		void set_target(std::string target);
		virtual void beSigned(Bureaucrat const &staff);
		virtual void execute(Bureaucrat const & executor) const = 0; 

	protected:


		class GradeTooHighException  : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class FormSignedException  : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		
		AForm(void);

		const std::string	_name;
		std::string			_nameAsSign;
		std::string			_target;
		bool				_sign;
		const int			_requierSign;
		const int			_requierExec;

};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);

#endif
