/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:32:25 by tigerber          #+#    #+#             */
/*   Updated: 2022/02/28 11:29:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

// ************************************************************************** //
//                               Constructor                                  //
// ************************************************************************** //

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout  << "index:"  << Account::_accountIndex << ";"
	          << "amount:" << Account::_amount << ";"
	          << "created" << std::endl;
	return ;
}

Account::~Account(void) {

	Account::_displayTimestamp();
	std::cout << "index:"  << Account::_accountIndex << ";"
	          << "amount:" << Account::_amount << ";"
	          << "closed"  << std::endl;	
	return ;
}

// ************************************************************************** //
//                               Fonction non Membre                          //
// ************************************************************************** //

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:"    << Account::_nbAccounts         << ";"
	          << "total:"       << Account::_totalAmount        << ";"
	          << "deposits:"    << Account::_totalNbDeposits    << ";"
			  << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {

	std::time_t now = time(0);
	std::tm *ltm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "] ";
	return ;
}

// ************************************************************************** //
//                               Fonction Membre                              //
// ************************************************************************** //

void	Account::makeDeposit( int deposit ) {
	
	int p_amount = this->_amount;
	
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:"    	<< Account::_accountIndex   << ";"
	          << "p_amount:"    << p_amount        			<< ";"
	          << "deposit:"    	<< deposit    				<< ";"
			  << "amount:" 		<< this->_amount 			<< ";"
			  << "nb_deposits:" << this->_nbDeposits 		<< std::endl;			
	return ;
}


bool	Account::makeWithdrawal( int withdrawal ) {

	int p_amount = this->_amount;
	
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:"    	   << Account::_accountIndex << ";"
	        	  << "p_amount:"       << p_amount        		 << ";"
	              << "withdrawal:"     << withdrawal    		 << ";"
			      << "amount:" 		   << this->_amount 		 << ";"
			      << "nb_withdrawals:" <<  this->_nbWithdrawals  << std::endl;
		return 0;
	}
	Account::_displayTimestamp();
	std::cout << "index:"    		  << Account::_accountIndex << ";"
	          << "p_amount:"    	  << p_amount        		<< ";"
	          << "withdrawal:refused" << std::endl;
	return 1;
}

int		Account::checkAmount( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:"    	<< Account::_accountIndex << ";"
	          << "amount:"    	<< this->_amount       	  << ";"
	          << "deposits:"    << this->_nbDeposits      << ";"
	          << "withdrawals:" << this->_nbWithdrawals   << ";"
			  << std::endl;
	
	return 0 ;
}

void	Account::displayStatus( void ) const {
	
	Account::_displayTimestamp();
	std::cout << "index:"    	<< Account::_accountIndex   << ";"
	          << "amount:"      << Account::_amount        	<< ";"
	          << "deposits:"    << Account::_nbDeposits    	<< ";"
			  << "withdrawals:" << Account::_nbWithdrawals 	<< std::endl;
	
	return ;
}


// ************************************************************************** //
//                               Variable Static                              //
// ************************************************************************** //

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
