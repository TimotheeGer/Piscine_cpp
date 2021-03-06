/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:28:17 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/14 13:28:18 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:

		Fixed( void );
		Fixed( Fixed const &src );
		Fixed(int const int_num);
		Fixed(float const float_num);
	   ~Fixed( void );
		
		Fixed &operator=( Fixed const &rhs );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		float toFloat( void ) const;
		int toInt( void ) const;


	private:

		int 			 _rawBits;
		static int const _stockBits;

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif
