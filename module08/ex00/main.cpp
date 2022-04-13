/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:43:20 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/13 15:02:51 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ( void ) {

    std::cout << "--------------------test_easyfind_int-----------------------" << std::endl;
    
    std::vector<int> tab_int(10);
    
    for (int i = 0; i < 10; i++)
        tab_int[i] = i;
    
    std::cout << "tab_int size = " << tab_int.size() << std::endl << std::endl;
    
    std::cout << "tab_int = ";
    for (int i = 0; i < 10; i++)
        std::cout << "[ " << tab_int[i] << " ]";
    std::cout << std::endl;

   
    std::vector<int>::iterator find =  easyfind(tab_int, 3);
    if (find != tab_int.end())
        std::cout << std::endl << "iterator find = " << *find << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl;

    std::vector<int>::iterator find1 =  easyfind(tab_int, 43);
    if (find1 != tab_int.end())
        std::cout << std::endl << "iterator find1 = " << *find1 << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl;        
   
    std::cout << std::endl << "--------------------test_easyfind_char----------------------" << std::endl;

    std::vector<char> tab_char(10);
    
    for (int i = 0; i < 10; i++)
        tab_char[i] = 'a' + i;
    
    std::cout << "tab_char size = " << tab_char.size() << std::endl << std::endl;
    
    std::cout << "tab_char = ";
    for (int i = 0; i < 10; i++)
        std::cout << "[ " << tab_char[i] << " ]";
    std::cout << std::endl;

    std::vector<char>::iterator find2 =  easyfind(tab_char, 'a');
    if (find2 != tab_char.end())
        std::cout << std::endl << "iterator find = " << *find2 << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl;

    std::vector<char>::iterator find3 =  easyfind(tab_char, 'z');
    if (find3 != tab_char.end())
        std::cout << std::endl << "iterator find = " << *find3 << std::endl;
    else
        std::cout << std::endl << "Error Easyfind value not find" << std::endl; 
    
    return 0;
}
