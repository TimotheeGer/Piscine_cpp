/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:15 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:48:16 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	Zombie *ptr;

	int i = 0;
	ptr = zombieHorde(14, "bob");
	while (i < 14)
	{
		ptr[i].announce();
		i++;
	}
	delete [] ptr;
	return (0);
}
