/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:34:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 13:11:26 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}
int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ) {
	std::cout << "ACCOUNTS INFO:" << std::endl;
	_displayTimestamp();
	std::cout << "Accounts: " << getNbAccounts() << std::endl;
	std::cout << "Total amount: " << getTotalAmount() << std::endl;
	std::cout << "Deposits: " << getNbDeposits() << std::endl;
	std::cout << "Withdrawals: " << getNbWithdrawals() << std::endl << std::endl;
}

Account::~Account( void ) {
	this->displayStatus();
	std::cout << "Account closed" << std::endl;
}

Account::Account( void ) {
	_accountIndex = _nbAccounts++;
	std::cout << "New account: " << this->_accountIndex << std::endl;
	_amount = 0;
	std::cout << "Amount: " << this->_amount << std::endl << std::endl;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts++;
	std::cout << "New account: " << this->_accountIndex << std::endl;
	_amount = initial_deposit;
	std::cout << "Amount: " << this->_amount << std::endl << std::endl;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount = _totalAmount + initial_deposit;
}

void	Account::makeDeposit( int deposit ) {
	std::cout << "Account: " << this->_accountIndex << std::endl;
	std::cout << "Account amount: " << this->_amount << std::endl;
	std::cout << "Deposit: " << deposit << std::endl;
	this->_amount += deposit;
	std::cout << "New amount: " << this->_amount << std::endl;
	this->_nbDeposits++;
	std::cout << "Number of deposits: " << this->_nbDeposits << std::endl << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;

}
bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_amount >= withdrawal) {
		std::cout << "Account: " << this->_accountIndex << std::endl;
		std::cout << "Account amount: " << this->_amount << std::endl;
		std::cout << "Withdrawal: " << withdrawal << std::endl;
		this->_amount -= withdrawal;
		std::cout << "New amount: " << this->_amount << std::endl;
		this->_nbWithdrawals++;
		std::cout << "Number of withdrawal: " << this->_nbDeposits << std::endl << std::endl;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (true);
	}
	else {
		std::cout << "Account: " << this->_accountIndex << std::endl;
		std::cout << "Account amount: " << this->_amount << std::endl;
		std::cout << "Withdrawal: " << withdrawal << std::endl;
		std::cout << "The whitdrawal is higher than the amount" << std::endl << std::endl;
		return (false);
	}
}
int		Account::checkAmount( void ) const {
	return (this->_amount);
}
void	Account::displayStatus( void ) const {
	std::cout << std::endl << "ACCOUNT STATUS: ";
	_displayTimestamp();
	std::cout << "Account: " << this->_accountIndex << std::endl;
	std::cout << "Amount: " << this->_amount << std::endl;
	std::cout << "Number of deposits: " << this->_nbDeposits << std::endl;
	std::cout << "Number of withdrawal: " << this->_nbWithdrawals << std::endl << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << (now->tm_year + 1900) << '/' << (now->tm_mon + 1) << '/'<<  now->tm_mday;
	std::cout << ' ' << (now->tm_hour) << ':';
	if ((now->tm_min) < 10)
		std::cout << '0' << (now->tm_min) << ':';
	else
		std::cout << (now->tm_min) << ':';
	if (now->tm_sec < 10)
		std::cout << '0' << (now->tm_sec) << std::endl;
	else
		std::cout << (now->tm_sec) << std::endl;
}
