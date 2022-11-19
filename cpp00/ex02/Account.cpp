/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:20:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/19 20:25:14 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t time;
	struct tm *timeinfo;

	time = std::time(0);
	timeinfo = std::localtime(&time);
	std::cout << "[" << timeinfo->tm_year <<
	timeinfo->tm_mon << timeinfo->tm_mday << "_" <<
	timeinfo->tm_hour <<
	timeinfo->tm_min <<
	timeinfo->tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalAmount += withdrawal;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << "created" << std::endl;
	return (true);
}

Account::Account(int initial_deposit)
{
	Account Account;

	Account._accountIndex = 0;
	Account._amount = initial_deposit;
	Account._nbWithdrawals = 0;
	Account._accountIndex = 0;
	Account._amount = 0;
	Account._totalAmount = 0;
	Account._totalNbDeposits = 0;
	Account._totalNbWithdrawals = 0;
	Account._nbAccounts = 0;
}

Account::~Account(void)
{
	std::cout << "Destructor called" << std::endl;
}

