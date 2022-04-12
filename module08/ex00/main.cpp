/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:20 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/12 17:12:42 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ( void ) {

    std::cout << "--------------------test_easyfind_int-----------------------" << std::endl;
    
    std::vector<int> tab_int(10);
    
    for (int i = 0; i < 10; i++)
        tab_int[i] = i;
    
    std::cout << "tab size = " << tab_int.size() << std::endl << std::endl;
    
    for (int i = 0; i < 10; i++)
        std::cout << "tab_int = " << tab_int[i] << std::endl;

   
    std::vector<int>::iterator find =  easyfind(tab_int, 3);
    if (find != tab_int.end())
        std::cout << std::endl << "iterator find = " << *find << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl;

    std::vector<int>::iterator find1 =  easyfind(tab_int, 43);
    if (find1 != tab_int.end())
        std::cout << std::endl << "iterator find = " << *find1 << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl;        
   
    std::cout << "--------------------test_easyfind_char----------------------" << std::endl;

    // std::vector<float> tab_float(10);
    
    // for (int i = 0; i < 10; i++)
    //     tab_float[i] = 0.42 + i;
    
    // std::cout << "tab size = " << tab_float.size() << std::endl << std::endl;
    
    // for (int i = 0; i < 10; i++)
    //     std::cout << "tab_float = " << tab_float[i] << std::endl;

    // std::vector<char>::iterator find2 =  easyfind(tab_float, 3);
    // if (find != tab_float.end())
    //     std::cout << std::endl << "iterator find = " << *find << std::endl;
    // else
    //     std::cout << std::endl << "Error Easyfind value not find" << std::endl;

    // std::vector<int>::iterator find3 =  easyfind(tab_float, 43);
    // if (find != tab_float.end())
    //     std::cout << std::endl << "iterator find = " << *find << std::endl;
    // else
    //     std::cout << std::endl << "Error Easyfind value not find" << std::endl; 
    
    return 0;
}