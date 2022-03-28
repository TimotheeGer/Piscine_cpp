/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:19:00 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/28 13:19:01 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>


class Bureaucrat {

	public:

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat( void );

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void increm( void );
		void decrem( void );
	
	private:

		std::string _name;
		int 		_grade;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif