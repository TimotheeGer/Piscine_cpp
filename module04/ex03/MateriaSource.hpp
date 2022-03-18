/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:27:38 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/18 09:40:35 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &rhs);

		bool checkType(std::string type);
		AMateria* searchMateria(std::string const &type);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	
	protected:
		
		AMateria* materia[4];

};

#endif
