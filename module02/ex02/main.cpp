/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:49:13 by tigerber          #+#    #+#             */
/*   Updated: 2022/03/14 14:36:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

    {
        std::cout << "----------------------main test 42-------------------------" << std::endl;
        
            Fixed a;
            Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
            std::cout << a << std::endl;
            std::cout << ++a << std::endl;
            std::cout << a << std::endl;
            std::cout << a++ << std::endl;
            std::cout << a << std::endl;
    
            std::cout << b << std::endl;
        
            std::cout << Fixed::max( a, b ) << std::endl;
            
        std::cout << "----------------------main test 42-------------------------" << std::endl;
    }
    {
        std::cout << "------------------------my test----------------------------" << std::endl;

            Fixed a;
            std::cout << "a = " << a << std::endl;
            
            Fixed b(5);
            std::cout << "b = " << b << std::endl;
            
            Fixed c(14.5f);
            a = c;
            std::cout << "a = " << a << std::endl;

            Fixed d(b);
            std::cout << "d = " << d << std::endl;

            Fixed const A = a;
            Fixed const D = d;
            std::cout << "A = " << A << std::endl;
            std::cout << "D = " << D << std::endl << std::endl;

            
            std::cout << "Fixed min = " << Fixed::min(a, d) << std::endl;
            std::cout << "Fixed max = " << Fixed::max(a, d) << std::endl << std::endl;
            
            std::cout << "Fixed const min = " << Fixed::min(A, D) << std::endl;
            std::cout << "Fixed const max = " << Fixed::max(A, D) << std::endl << std::endl;

            std::cout << "operator + = " << d + 5 << std::endl;
            std::cout << "operator + = " << d + 5.5f << std::endl << std::endl;
            
            std::cout << "operator - = " << d - 5 << std::endl;
            std::cout << "operator - = " << d - 5.5f << std::endl << std::endl;
            
            std::cout << "operator * = " << d * 2 << std::endl;
            std::cout << "operator * = " << d * 1.5f << std::endl << std::endl;

            std::cout << "operator / = " << d / 2 << std::endl;
            std::cout << "operator / = " << d / 1.5f << std::endl << std::endl;

            std::cout << "operator > = " << (d > a) << std::endl;  
            std::cout << "operator > = " << (a > d) <<  std::endl << std::endl;  

            std::cout << "operator < = " << (d < a) << std::endl;  
            std::cout << "operator < = " << (a < d) <<  std::endl << std::endl;          
            
            std::cout << "operator >= = " << (d >= 5) << std::endl;  
            std::cout << "operator >= = " << (d >= a) << std::endl;  
            std::cout << "operator >= = " << (a >= d) <<  std::endl << std::endl;

            std::cout << "operator <= = " << (d <= 5) << std::endl;  
            std::cout << "operator <= = " << (d <= a) << std::endl;  
            std::cout << "operator <= = " << (a <= d) <<  std::endl << std::endl;

            std::cout << "operator == = " << (d == 5) << std::endl;  
            std::cout << "operator == = " << (a == d) <<  std::endl << std::endl;

            std::cout << "operator != = " << (d != 5) << std::endl;  
            std::cout << "operator != = " << (a != d) <<  std::endl << std::endl;

            if (--a == 14.5f)            
                std::cout << "if operator --a = " << a << std::endl;
            else
                std::cout << "else operator --a = " << a << std::endl;
            a = 14.5f;
            if (a-- == 14.5f)  
                std::cout << "if operator a-- = " << a << std::endl << std::endl;
            else
                std::cout << "else operator a-- = " << a << std::endl << std::endl;
            
            
            if (++d == 5)            
                std::cout << "if operator ++d = " << d << std::endl;
            else
                std::cout << "else operator ++d = " << d << std::endl;
            d = 5;
            if (d++ == 5)  
                std::cout << "if operator d++ = " << d << std::endl;
            else
                std::cout << "else operator d++ = " << d << std::endl;
                
        std::cout << "------------------------my test----------------------------" << std::endl;
    }
}