#include "BankAccount.h"

BankAccount::BankAccount(int accountNumber, double balance, string holder_name) : accountNumber(accountNumber), balance(balance), holder_name(holder_name)
{
    cout<<"BankAccount Constructor"<<endl;
}

BankAccount::~BankAccount()
{
    cout<<"BankAccount is destroyed"<<endl;
}

void BankAccount::Display(){
    cout<<"accountNumber : "<<accountNumber<<" Balance : "<<balance<<" holder_name : "<<holder_name<<endl;
}

void BankAccount::deposit_withdraw(double Money){
    balance+=Money;
}
