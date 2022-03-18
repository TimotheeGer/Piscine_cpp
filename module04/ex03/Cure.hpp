/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:25:24 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 08:25:25 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {

	public:

		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const &src);
		~Cure(void);

		Cure &operator=(Cure const &rhs);

		virtual Cure* clone() const;

};

#endif