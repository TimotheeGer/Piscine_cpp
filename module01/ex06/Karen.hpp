/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:08:31 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 19:09:12 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

	public:
	
		void complain( std::string level );
		Karen( void );
		~Karen( void );
	
	private:
	
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		void _default( void );
};

#endif
