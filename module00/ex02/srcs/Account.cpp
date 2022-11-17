/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:29:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/07 15:46:59 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {
}

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"destroyed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout <<
	"amount:" << this->checkAmount() << ";" <<
	"nb_depositis:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout <<
		"amount:" << this->checkAmount() << ";" <<
		"nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"deposits:" << this->_nbDeposits << ";" <<
	"withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts() << ";" <<
	"total:" << getTotalAmount() << ";" <<
	"deposits:" << getNbDeposits() << ";" <<
	"withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::_displayTimestamp(void) {
	time_t		tim = time(NULL);
	struct tm	now = *localtime(&tim);

	std::cout << "[" << now.tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << now.tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_min;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_sec << "] ";
}
