#include "BankAccount.h"
#include <iostream>
using namespace std;
/*
Learn how friend functions access private data.
Create a BankAccount class with account number, balance, and holder name.
Tasks:
Make a friend function viewBalance() that prints the account details.
Make another member function to deposit and withdraw money.
Show that friend function can access private data directly.
Expected Learning:
Friend function usage
Difference between member functions and friend functions

*/
void viewBalance(BankAccount& BA)
{
    cout<<"Balance : "<<BA.balance<<endl;
}

int main(){
    
    BankAccount BA1;
    BA1.Display();
    BA1.deposit_withdraw(55);
    viewBalance(BA1);

    return 0;
}