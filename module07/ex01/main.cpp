/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:36:49 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/11 13:33:54 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main(void) {

    std::cout << "-------------------test int----------------------------" << std::endl << std::endl;
    
    int tab_int[5] = {1, 2, 3, 4, 5};    
    iter(tab_int, 5, print_val);

    std::cout << std::endl << "-------------------test float--------------------------" << std::endl << std::endl;
    
    float tab_float[5] = {1.1, 2.2, 3.3, 4.4, 5.5};    
    iter(tab_float, 5, print_val);
    
    std::cout << std::endl << "-------------------test string-------------------------" << std::endl << std::endl;

    std::string tab_string[5] = {"bonjour", "aurevoir", "merci", "lol", "ok"};
    iter(tab_string, 5, print_val);
    
    return 0;
}
