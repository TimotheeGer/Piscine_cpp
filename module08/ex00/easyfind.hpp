/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:17 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/12 17:04:50 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>

template <typename T>

typename T::iterator easyfind(T &a, int b) {

	return std::find(a.begin(), a.end(), b);
}

#endif
