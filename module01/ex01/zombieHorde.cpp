/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:01 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:48:02 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *ptr = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		ptr[i].give_name(name);
		i++;
	}
	return (ptr);
}
