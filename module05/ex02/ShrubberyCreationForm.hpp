/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:18:35 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 23:31:22 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		void executeForm(Bureaucrat const & executor) const;
		
	private:

		ShrubberyCreationForm(void);

};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &rhs);

#endif
