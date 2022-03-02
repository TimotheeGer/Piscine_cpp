/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:54:34 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/02 18:55:28 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "Error Argument." << std::endl;
		return (0);
	}
	
	Karen k;

	k.complain(av[1]);
}
