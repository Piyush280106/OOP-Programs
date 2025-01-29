#include <iostream>
using namespace std;

struct Record {
    int serialNo;
    int transactionAmount;
    int currentBalance;
};

int main() {
    int balance = 0,option,amount,transactionCount=0;
    Record transactions[100]; 
    cout<<"\nWelcome to ABC Bank";

    while (1) 
	{
        cout<<"\n1.Deposit Amount\n2.Withdraw Amount\n3.Check Balance\n4.Get Statement\n5.Exit"<<endl;
		cout<<"Enter Choice:";
        cout << "Enter Choice: ";
        cin >> option;

        switch (option) 
		{
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) 
				{
                    balance += amount;
                    transactions[transactionCount].serialNo = transactionCount + 1;
                    transactions[transactionCount].transactionAmount = amount;
                    transactions[transactionCount].currentBalance = balance;
                    transactionCount++;
                    cout<<"Deposit successful\n";
                } else {
                    cout<<"Invalid amount\n";
                }
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    transactions[transactionCount].serialNo = transactionCount + 1;
                    transactions[transactionCount].transactionAmount = -amount;
                    transactions[transactionCount].currentBalance = balance;
                    transactionCount++;
                    cout << "Withdrawal successful\n";
                } else if (amount > balance) 
				{
                    cout << "Insufficient funds\n";
                } else 
				{
                    cout << "Invalid amount.\n";
                }
                break;
                
            case 3:
            	cout<<"Balance:"<<balance<<endl;
            	break;

            case 4:
                if (transactionCount == 0) 
				{
                    cout << "No transactions available.\n";
                } else {
                    cout << "\tTRANSACTION RECORD"<< endl;
                    cout << " No  Amount       Balance     " << endl;
                    cout << "------------------------------------" << endl;
                    for (int i = 0; i < transactionCount; i++) {
                        cout << " " << transactions[i].serialNo << "   "
						<<  transactions[i].transactionAmount << "           "
                        <<  transactions[i].currentBalance << "         " << endl;
                    }
                    cout << "------------------------------------\n";
                }
                break;

            case 5:
                cout << "Exit\n";
                return 0;

            default:
                cout << "Invalid selection. Please try again.\n";
        }
    }

    return 0;
}

