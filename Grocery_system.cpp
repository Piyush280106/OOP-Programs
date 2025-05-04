#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	

	int n;
	cout<<"-----------Welcome-----------"<<endl;
	cout<<"                             "<<endl;
	cout<<"enter the number of product: ";
	cin>>n;
	int a[n];
	string name[n];
	int price[n];
	int total=0;
	cout<<"enter the name and price of the product:\n";
	cout<<"---------------------------------------------------\n";
	for(int i=0;i<n;i++)
	{
		cin>>name[i];
		cin>>price[i];
		total=total+price[i];	
	}
	cout<<"---------------------------------------------------\n";
	for(int i=0;i<n;i++)
	{
		cout<<setw(5)<<name[i]<<":"<<setw(5)<<price[i]<<"\n";	
	}
	cout<<"---------------------------------------------------\n";
	cout<<"\ntotal bill:"<<total<<endl;
	cout<<"-------Thank You!-------"<<endl;
	
	
	
}
