/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:16 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 22:45:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:

		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);

		Dog &operator=(Dog const &rhs);
		virtual void makeSound(void) const;
		virtual std::string const getType2(void) const;


	protected:

	private:

		Brain *cerv;
};

#endif