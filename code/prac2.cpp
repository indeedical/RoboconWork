#include <iostream>
using namespace std;
class BankAccount
{
    public:
    double balance=100.0;
    void deposit(double amount)
    {
        cout<<"Deposited amount: "<<amount<<endl;
        double nbalance=balance+amount;
        cout<<"New balance: "<<nbalance<<endl;
    }
    void withdraw(double amount)
    {
        cout<<"Withdrew: "<<amount<<endl;
        double nbalance=balance-amount;
        cout<<"New balance: "<<nbalance<<endl;
    }
    void checkBalance()
    {
        cout<<"Current balance: "<<balance<<endl;
    }

};
int main()
{
    BankAccount BA;
    char c;
    cout<<"Enter whether you want to Deposit (D), Withdraw (W) or Check Balance (C)";
    double a;
    switch (c)
    {
        case 'D':
        cout<<"Enter amount to be deposited:"<<endl;
        cin>>a;
        BA.deposit(a);
        break;
        case 'W':
        cout<<"Enter amount to be withdrawn:"<<endl;
        cin>>a;
        BA.withdraw(a);
        break;
        case 'C':
        BA.checkBalance();
        break;
        default: cout<<"Invalid input";
        break;
    }
    return 0;
}