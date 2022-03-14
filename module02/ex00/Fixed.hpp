/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:03:02 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/14 13:19:43 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed( void );					
		Fixed( Fixed const & src );			
	   ~Fixed( void );					
		
		Fixed &operator=( Fixed const &rhs );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:

		int 			 _rawBits;
		static int const _stockBits;

};

#endif