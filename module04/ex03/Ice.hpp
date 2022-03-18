/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:25:32 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 08:25:33 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {

	public:

		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const &src);
		~Ice(void);

		Ice &operator=(Ice const &rhs);

		virtual Ice* clone() const;

};

#endif