/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:04 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:49:39 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
	
		void announce( void );
		void give_name( std::string name );
		Zombie( void );
		~Zombie( void );

	private:
	
		std::string _name;
};

Zombie * zombieHorde( int N, std::string name );

#endif
