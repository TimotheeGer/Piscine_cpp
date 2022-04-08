/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:58:23 by tigerber          #+#    #+#             */
/*   Updated: 2022/04/08 16:32:32 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

	std::cout << std::endl << "-----------------int------------------------" << std::endl << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap : " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl << "-----------------string---------------------" << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "swap : " << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "-----------------float----------------------" << std::endl << std::endl;
	float fa = 2.42;
	float fb = 3.42;
	std::cout << "float a = " << fa << ", float b = " << fb << std::endl;
	::swap( fa, fb );
	std::cout << "swap : " << "float a = " << fa << ", float b = " << fb << std::endl;
	std::cout << "min( a, b ) = " << ::min( fa, fb ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( fa, fb ) << std::endl;

	std::cout << std::endl << "-----------------char-----------------------" << std::endl << std::endl;
	char ca = 'a';
	char cb = 'b';
	std::cout << "char a = " << ca << ", char b = " << cb << std::endl;
	::swap( ca, cb );
	std::cout << "swap : " << "char a = " << ca << ", char b = " << cb << std::endl;
	std::cout << "min( a, b ) = " << ::min( ca, cb ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( ca, cb ) << std::endl;
	return 0;
}