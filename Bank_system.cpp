#include <iostream>
using namespace std;


class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing " << amount << " in cash." << endl;
    }
    
    void deposit(float amount) {
        cout << "Depositing " << amount << " via digital payment." << endl;
    }
    
    void deposit(string upiID, int amount) {
        cout << "Depositing" << amount << " using UPI (" << upiID << ")." << endl;
    }
};

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    
    void display() {
        cout << "Account " << accountNumber << " Balance:" << balance << endl;
    }
    
    void operator+(Account &acc) {
        double transferAmount;
        cout << "Enter amount to transfer from Account " << accountNumber << " to Account " << acc.accountNumber << ": ";
        cin >> transferAmount;

        if (balance >= transferAmount) {
            balance -= transferAmount;
            acc.balance += transferAmount;
            cout << "Transfered" << transferAmount << endl;
        } else {
            cout << "Insufficient balance in Account " << accountNumber << "!" << endl;
        }
    }

  
    void operator-(double withdrawAmount) {
        if (balance >= withdrawAmount) {
            balance -= withdrawAmount;
            cout << "Withdrawing " << withdrawAmount << " from Account " << accountNumber << "..." << endl;
        } else {
            cout << "Insufficient balance in Account " << accountNumber << "!" << endl;
        }
    }
};

int main() {
    Bank bank;
    bank.deposit(5000);               
    bank.deposit(1500.75f);           
    bank.deposit("gpay@upi", 2500);  
    
    cout << endl;

    Account acc1(1, 10000);
    Account acc2(2, 5000);
    
    acc1.display();
    acc2.display();
    
    cout << endl;
    acc1 + acc2;  
    acc1.display();
    acc2.display();
    
   

    return 0;
}

