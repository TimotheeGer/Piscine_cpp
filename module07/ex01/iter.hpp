/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:36:35 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/08 18:04:46 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *tab, int size, void(*fonction)(T &val)) {

	for (int i = 0 ; i < size ; i ++)
		fonction(tab[i]);
}

template <typename T>
void print_val(T val) {
	
	std::cout << "value = " << val << std::endl;
	return ;
}

#endif
