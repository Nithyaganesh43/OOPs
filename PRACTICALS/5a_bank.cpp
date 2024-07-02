// ALGORITHM:
// STEP 1: Start the Program.
// STEP 2: Create a BankAccount object with account number 12345 and initial balance $1000
// STEP 3: Call the function Deposit Money, to deposit money to user account
// STEP 4: Call the function withdraw, to withdraw the amount from the user account
// STEP 5: Call the function getbalance, to know the balance amount of the user in the account.

#include <iostream>

using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    void setAccountDetails(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
    
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    int accNum;
    double initialBalance, amount;

    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    account.setAccountDetails(accNum, initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    cout << "Balance: " << account.getBalance() << endl;

    return 0;
}
