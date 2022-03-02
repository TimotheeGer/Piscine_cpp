/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:42 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:49:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
	
		void announce( void );
		Zombie( std::string name );
		~Zombie( void );

	private:
	
		std::string _name;
};

Zombie* newZombie( std::string name );

void randomChump( std:: string name );

#endif