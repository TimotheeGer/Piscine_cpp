/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:58:27 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/04 14:58:36 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b) {

	T tmp;

	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T	min(T &a, T &b) {

	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T	max(T &a, T &b) {

	if (a <= b)
		return (b);
	else
		return (a);
}

#endif
