/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:44:06 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:50:19 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

	public:

		HumanA( std::string name, Weapon &axe );
		~HumanA( void );
		void attack( void );

	private:
	
		Weapon &_type;
		std::string _name;
};

#endif
