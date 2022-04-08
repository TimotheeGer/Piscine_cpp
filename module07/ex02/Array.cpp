/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:09:34 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/08 18:11:39 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"



template <typename T>
Array<T>::Array( Array const &src ) {

	*this = src;
}

template <typename T>
Array<T> &operator=( Array const &rhs ) {

	this->_n = rhs._n;
	this->_tab = rhs._tab;
}

#endif
