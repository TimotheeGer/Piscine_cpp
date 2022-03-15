/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:23:53 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 21:23:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain {

	public:

		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain &operator=(Brain const &rhs);
		

	protected:

		std::string ideas[100];
	private:


};

#endif