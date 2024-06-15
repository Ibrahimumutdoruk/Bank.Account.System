#include <iostream>
using namespace std;

class Account
{
private:
    string accountName;
    int accountID;
    double balance=0;
public:

    void setID (int accountID);

    int getID();

    void setName(string accountName);

    string getName() ;


    void deposit(double amount) ;

    void withdraw(double amount) ;


    double getBalance();
};
