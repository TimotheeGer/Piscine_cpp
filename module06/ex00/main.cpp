/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:44:40 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/07 15:16:12 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main (int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "Error arguments" << std::endl;
	 	return 0;
	}

	Convert a(av[1]);
	a.checkWhichConvert();

	return 0;
}
