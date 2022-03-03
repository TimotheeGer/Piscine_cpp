/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:03:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/03 12:21:40 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed( void );							// Default constructeur
		Fixed( Fixed const & src );				// Constructeur copie
	   ~Fixed( void );							// Default destructor
		
		Fixed &operator=( Fixed const &rhs );	// Constructeur affectation
		
		int getRawBits( void ) const;			// return value virgule fixe
		void setRawBits( int const raw );		// init value virgule fixe

	private:

		int 			 _rawBits;
		static int const _stockBits;			// assign litteral int 8

};

#endif