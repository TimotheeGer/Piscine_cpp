/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:12:29 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/21 15:39:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
#define FIRE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class Fire : public AMateria {

	public:

		Fire(void);
		Fire(std::string const & type);
		Fire(Fire const &src);
		~Fire(void);

		Fire &operator=(Fire const &rhs);

		Fire* clone() const;
		void use(ICharacter &target);

};

#endif