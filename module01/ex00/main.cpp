/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:23 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:48:56 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {

	Zombie zombie("rob");
	zombie.announce();

	Zombie *ptr = newZombie("theo");
	ptr->announce();

	randomChump("tim");

	delete ptr;
	return (0);
}
