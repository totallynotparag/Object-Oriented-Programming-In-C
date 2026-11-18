#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double amount) {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void display() const {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    string name;
    int number;
    double initialBalance, amount;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> number;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(name, number, initialBalance);

    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    account.deposit(amount);
    account.display();

    return 0;
}
