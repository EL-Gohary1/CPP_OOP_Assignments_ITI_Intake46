#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;
    string holder_name;

public:
    BankAccount(int accountNumber = 0, double balance = 0, string holder_name="BankAccount Default");
    ~BankAccount();
    void deposit_withdraw(double Money);
    void Display();
    void friend viewBalance(BankAccount& BA);
};



#endif