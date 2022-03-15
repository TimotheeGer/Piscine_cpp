/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:29:56 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 17:11:22 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	public:

		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal &operator=(Animal const &rhs);
		virtual void makeSound(void) const;
		std::string const getType(void) const;

	protected:

		std::string type;

	private:


};

#endif