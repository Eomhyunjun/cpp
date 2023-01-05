#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
    Account();

    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;

    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;

    _nbAccounts++;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t t_stamp;
    char buff[16];

    time(&t_stamp);
    strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&t_stamp));
    std::cout << "[" << buff << "] ";
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    // past amount
    std::cout << "p_amount:" << _amount << ";";
    // input deposit
    std::cout << "deposit:" << deposit << ";";

    // now amount
    _amount += deposit;
    _totalAmount += deposit;

    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;

    // 저금 수 증가
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";

    if (_amount - withdrawal > 0)
    {
        std::cout << "withdrawal:" << withdrawal << ";";

        _amount -= withdrawal;
        _totalAmount -= withdrawal;

        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;

        _totalNbWithdrawals++;
        return (true);
    }
    else
    {
        std::cout << "withdrawal:"
                  << "refused" << std::endl;
        return (false);
    }
}

int Account::checkAmount(void) const
{
    return (_amount);
}

/*
    맥에서는 vector 안에서의 소멸 순서는 vextor가 구현된 표준 라이브러리에 따라 다르기 때문에
    순서가 다를 수 있음.
*/