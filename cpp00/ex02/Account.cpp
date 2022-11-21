/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:20:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/21 12:35:58 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
	<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits 
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t timestate;
	struct tm *timeinfo;

	timestate = time(NULL);
	timeinfo = localtime(&timestate);
	std::cout << "[" << timeinfo->tm_year <<
	timeinfo->tm_mon << timeinfo->tm_mday << "_" <<
	timeinfo->tm_hour <<
	timeinfo->tm_min <<
	timeinfo->tm_sec << "] ";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	return ;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
	<< this->_amount << ";deposits:" << this->_nbDeposits 
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalAmount += withdrawal;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << "created" << std::endl;
	return (true);
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0)
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

