#include "Account.h"
using namespace std;


void Account::setID(int accountID)
{
    this->accountID = accountID;

}

int Account::getID()
{
    return accountID;
}

void Account::setName(string accountName)
{
    this->accountName = accountName;
}

string Account::getName()
{
    return accountName;
}

void Account::deposit(double amount)
{
    if (amount < 0)
    {
        cout << "!!Amount can not be negative!!" << endl;
    }
    else
    {
        balance += amount;
    }
}
void Account::withdraw(double amount)
{
    if (amount < 0)
    {
        cout << "!!Withdrawal amount can not be negative!!" << endl;
    }
    else if (amount > balance)
    {
        cout << "!!There is no enough money!!" << endl;
    }
    else
    {
        balance -= amount;
    }
}

double Account::getBalance()
{
    return balance;
}
