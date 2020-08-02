/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:41:59 by mli               #+#    #+#             */
/*   Updated: 2020/08/02 23:25:26 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
//	Account::_totalNbDeposits++;
	Account::_totalAmount += this->_amount;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
	Account::_nbAccounts--;
//	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalAmount -= this->_amount;
//	Account::_totalNbWithdrawals -= this->_nbWithdrawals;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts \
		<< ";total:" << Account::_totalAmount \
		<< ";deposits:" << Account::_totalNbDeposits \
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount \
		<< ";deposit:" << deposit;

	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;

	std::cout << ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits \
		<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;

	std::cout << withdrawal << ";amount:" << this->_amount \
		<< ";nb_withdrawals:" << this->_nbWithdrawals \
		<< std::endl;
	return (true);
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->_amount \
		<< ";deposits:" << this->_nbDeposits \
		<< ";withdrawals:" << this->_nbWithdrawals \
		<< std::endl;
}

void	Account::_displayTimestamp (void)
{
	std::cout << "[19920104_091532] ";
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}
