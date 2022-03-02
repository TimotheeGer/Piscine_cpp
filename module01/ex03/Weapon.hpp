/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:44:33 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:50:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {

	public:

		Weapon( std::string arme );
		~Weapon( void );
		const std::string &getType();
		void setType(std::string str);

	private:
	
		std::string _type;
};

#endif
