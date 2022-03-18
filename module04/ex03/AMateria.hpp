/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:19:24 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 08:19:25 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:

		std::string type;

	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &rhs);


		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);


};

#endif
