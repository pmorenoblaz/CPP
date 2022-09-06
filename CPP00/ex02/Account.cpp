/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:34:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/03 16:51:45 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
    return (0);
}
int	Account::getTotalAmount( void ){
    return (0);
}
int	Account::getNbDeposits( void ){
    return (0);
}
int	Account::getNbWithdrawals( void ){
    return (0);
}
void	Account::displayAccountsInfos( void ){
    return ;
}

Account::~Account( void )
{
    return ;
}

Account::Account( void )
{
    return ;
}

Account::Account( int initial_deposit )
{
    // _totalNbDeposits = initial_deposit;
}

void	Account::makeDeposit( int deposit )
{
    return;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    return (true);
}
int		Account::checkAmount( void ) const
{
    return (0);
}
void	Account::displayStatus( void ) const
{
    return ;
}

void	Account::_displayTimestamp(void)
{
	time_t	rawtime;
	struct	tm * timeinfo;
	char	buffer[16];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 16, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}
