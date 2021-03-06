/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:25:45 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/15 15:28:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	FragTrap tim("tim");
	FragTrap theo = FragTrap("theo");
	ScavTrap laura("laura");

	tim.highFivesGuys();
	tim.attack("theo");
	tim.takeDamage(10);
	tim.get_status();

	theo.highFivesGuys();
	theo.beRepaired(50);
	theo.get_status();

	laura.attack("tim");
	laura.guardGate();
	return (0);
}