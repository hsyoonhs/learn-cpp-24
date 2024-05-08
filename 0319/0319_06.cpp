#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string owner;
    int balance;

public:
    void setBalance(int amount);
    int getBalance();
    void deposit(int amount);
    void withdraw(int amount);
    void print();
};

void BankAccount::setBalance(int amount)
{
    balance = amount;
}

int BankAccount::getBalance()
{
    return balance;
}

void BankAccount::deposit(int amount)
{
    balance += amount;
}

void BankAccount::withdraw(int amount)
{
    balance -= amount;
}

void BankAccount::print()
{
    cout << "계좌 잔액은 " << balance << "원입니다." << endl;
}

int main()
{
    BankAccount account;
    account.setBalance(0);
    account.deposit(10000);
    account.print();
    account.withdraw(8000);
    account.print();
    
    return 0;
}
