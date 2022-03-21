/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:42:11 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/20 14:11:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		Form(void);
		Form(Form const &src);w
		Form(std::string name, int requierSign, int requierExec);
		~Form(void);

		Form &operator=(Form const &rhs);

		std::string get_name(void) const;
		std::string get_nameSign(void) const;
		int get_requierSign(void) const;
		int get_requierExec(void) const;
		bool get_sign(void) const;

		void beSigned(Bureaucrat const &staff);

	private:

		const std::string  _name;
		std::string  _nameAsSign;
		bool _sign;
		const int _requierSign;
		const int _requierExec;
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif