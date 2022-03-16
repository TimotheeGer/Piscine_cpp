/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:53:44 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/16 15:35:00 by tigerber         ###   ########.fr       */
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
		
		void add_ideas(std::string ideas, std::string type);
		void get_all_ideas(std::string type) const;
		void clear_all_ideas(std::string type);

	protected:

		std::string ideas[100];
		
	private:


};

#endif