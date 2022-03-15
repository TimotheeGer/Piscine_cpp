/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:03 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 22:45:24 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	public:

		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);

		Cat &operator=(Cat const &rhs);
		virtual void makeSound(void) const;
		virtual std::string const getType2(void) const;

	protected:

	private:

		Brain *cerv;

};

#endif