/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:20:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/19 21:52:17 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << "created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	std::cout << "Destructor called" << std::endl;
}

