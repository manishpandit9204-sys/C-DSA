#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " Rs credited successfully." << endl;
        }
        else
        {
            throw "Amount should be greater than 0";
        }
    }

    // Withdraw
    void withdraw(int amount)
    {
        if (amount <= 0)
        {
            throw "Amount should be greater than 0";
        }
        else if (amount > balance)
        {
            throw "Your balance is low";
        }
        else
        {
            balance -= amount;
            cout << amount << " Rs debited successfully." << endl;
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Customer C1("Manish", 5000, 100);

    try
    {
        C1.deposit(100);
        C1.withdraw(9000); // This will throw an exception
    }
    catch (const char *e)
    {
        cout << "Exception Occurred: " << e << endl;
    }

    C1.display();

    return 0;
}