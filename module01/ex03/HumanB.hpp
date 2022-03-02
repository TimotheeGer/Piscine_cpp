/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:44:17 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:50:40 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

	public:

		HumanB( std::string str );
		~HumanB( void );
		void attack( void );
		void setWeapon(Weapon &axe);

	private:
	
		Weapon *_type;
		std::string _name;
};

#endif
