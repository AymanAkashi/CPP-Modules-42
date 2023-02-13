/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:20:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:22:45 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**
 * It displays the current date and time in the format YYYYMMDD_HHMMSS
 */
void	Account::_displayTimestamp(void)
{
	time_t timestate;
	struct tm *timeinfo;

	timestate = time(NULL);
	timeinfo = localtime(&timestate);
	std::cout << "[" << timeinfo->tm_year + 1900 << std::setw(2) << std::setfill('0') << timeinfo->tm_mon << std::setw(2) << std::setfill('0') << timeinfo->tm_mday << "_" << std::setw(2) << std::setfill('0') << timeinfo->tm_hour << std::setw(2) << std::setfill('0') << timeinfo->tm_min << std::setw(2) << std::setfill('0') << timeinfo->tm_sec << "] ";
}

/**
 * It displays the number of accounts, the total amount of money in all accounts, the total number of deposits and the total number of withdrawals
 */
void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
	<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}


/**
 * It displays the timestamp, the account index, the amount, the deposit and the withdrawal, then it adds the deposit to the amount, increments the number of deposits and the total number of deposits, and finally it adds the deposit to the total amount
 * 
 * @param deposit the amount of money to deposit
 * 
 * @return void
 */
void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";deposits:" << deposit << ";withdrawals:0" << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	return ;
}

/**
 * It checks if the amount to withdraw is less than the current amount, if it is, it withdraws the amount and returns true, otherwise it returns false
 * 
 * @param withdrawal the amount to withdraw
 * 
 * @return A boolean.
 */
bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";withdrawals:" << withdrawal << std::endl;
	return (true);
}

/**
 * It displays the timestamp, the account index, the amount, the number of deposits and the number of withdrawals
 * 
 * @return void
 */
void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

/**
 * It initializes the attributes of the Account instance with the given initial_deposit
 * 
 * @param initial_deposit the initial deposit amount
 */
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

/**
 * Constracter
 */
Account::Account(void)
{
	
}

/**
 * Destructor :
 * It displays the timestamp, then the account index, then the amount, then the word "closed".
 */
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << "closed" << std::endl;
}

