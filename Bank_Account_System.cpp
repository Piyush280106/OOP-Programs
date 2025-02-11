#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
	private:
		string AccountHolder;
		int AccountNumber;
		string AccountType;
		double Balance=0;
	public:
		
		void setAccountHolder()
		 {
		 	cout<<"Enter  Acc. Holder Name:";
		 	cin>>AccountHolder;
		 }
		 void setAccountNumber()
		 {
		 	cout<<"\nEnter Account Number:";
		 	cin>>AccountNumber;
		 }
		 void  setAccountType()
		 {
		 	cout<<"\nEnter Account Type:";
		 	cin>>AccountType;
		 }
		 
		 void getAccountHolder()
		 {
		 	cout<<"\n\nHolder:";
		 	cout<<AccountHolder;
		 }
		 void getAccountNumber()
		 {
		 	cout<<"\nAccount Number:";
		 	cout<<AccountNumber;
		 }
		 void  getAccountType()
		 {
		 	cout<<"\nType:";
		 	cout<<AccountType;
		 }
		 void getBalance()
		 {
		 	cout<<"\nBalance:";
		 	cout<<Balance;
		 }
		 void deposit(double amount)
		 {
		 	cout<<"\nEnter amount to deposit:";
		 	cin>>amount;
		 	Balance+=amount;
		 }
		 void withdraw(double amount)
		 {
		 	cout<<"\nEnter amount to withdraw:";
		 	cin>>amount;
		 	if(amount>Balance)
		 	{
		 		cout<<"\nInsufficient Balance";	
			}
			else
				Balance-=amount;
		 }
	BankAccount(){}
	BankAccount(string h,int n,string t,double b)
	{
		AccountHolder=h;
		AccountNumber=n;
		AccountType=t;
		Balance=b;
	}
};

int main() {
    int option,no;
    BankAccount B1;
    
    B1.setAccountHolder();
    B1.setAccountNumber();
    B1.setAccountType();

    do {
        cout << "\nWelcome!";
        cout << "\n1.Deposit Amount";
        cout << "\n2.Withdraw Amount";
        cout << "\n3.Check Balance";
        cout << "\n4.Account Type";
        cout << "\n5.Account Details";
        cout << "\n6.Exit";
        cout << "\nEnter Choice: ";
        cin >> option;

        switch (option) {
            case 1:
                B1.deposit(no);
                break;
            case 2:
                B1.withdraw(no);
                break;
            case 3:
                B1.getBalance();
                break;
            case 4:
                B1.getAccountType();
                break;
            case 5:
                B1.getAccountHolder();
                B1.getAccountNumber();
                B1.getAccountType();
                B1.getBalance();
                break;
            default:
                cout << "\nInvalid Option! Please try again.";
        }
    } while (option != 6);

}
