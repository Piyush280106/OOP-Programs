#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string item[3]={"Rice","Oil","Soap"};
	int price[3]={50,1000,60};
	cout<<"\tItem\tPrice"<<endl;
	for(int i=0;i<3;i++)
	{
			cout<<"\t"<<item[i]<<"\t"<<setw(5)<<price[i]<<endl;
	}
	cout<<"\tTotal"<<"\t"<<setw(5)<<price[0]+price[1]+price[2];
}
