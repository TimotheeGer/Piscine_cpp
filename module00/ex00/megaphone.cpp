/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:57:47 by tigerber          #+#    #+#             */
/*   Updated: 2022/02/24 14:11:05 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (j < ac)
	{
		while (av[j][i])
		{
			std::cout << static_cast<char>(std::toupper(av[j][i]));
			i++;
		}
		if (!(av[j + 1] == NULL))
			std::cout << " ";
		i = 0;
		j++;
	}
	std::cout << std::endl;
	return (0);
}