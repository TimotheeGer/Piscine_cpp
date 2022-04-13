/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:04:52 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/13 18:48:45 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>
#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(10);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(1181);
        
        // // sp.addRandomNumber();
        // sp.addNumber(11);
        // sp.addNumber(9);
        sp.addRandomNumber();
        // sp.addRandomNumber();
        // sp.addRandomNumber();
        sp.printSpan();    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}