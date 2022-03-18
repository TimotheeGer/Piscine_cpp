/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:20:15 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 09:27:09 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	public:

		Character(void);
		Character(Character const &src);
		Character(std::string name);
		virtual ~Character(void);

		Character &operator=(Character const &rhs);

		std::string const & getName() const;
		
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:

		std::string _name;
		AMateria* item[4];

};

#endif
