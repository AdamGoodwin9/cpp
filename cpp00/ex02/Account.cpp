#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout   << "accounts:" << _nbAccounts << ";total:" <<_totalAmount
                << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
                << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";amount:" <<_amount
                << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";amount:" <<_amount
                << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";p_amount:" << p_amount
                << ";deposit:" << deposit << ";amount:" << _amount
                << ";nb_deposits:"<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout   << "index:" << _accountIndex << ";p_amount:" << p_amount
                    << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";p_amount:" << p_amount
                << ";withdrawal:" << withdrawal << ";amount:" << _amount
                << ";nb_withdrawals:"<< _nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount() const
{
    return _amount;
}

void	Account::displayStatus() const
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";amount:" <<_amount
                << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp()
{
    time_t	timestamp;
	char	buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "] ";
}