#include<iostream>
#include <iomanip>
using namespace std;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		void setdate()
		{
			cout<<"\nEnter Day:";
			cin>>day;
			cout<<"\nEnter Month:";
			cin>>month;
			cout<<"\nEnter Year:";
			cin>>year;
		}
		
		void display()
		{
			string months[] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};
			cout<<"\nDate:="<<day<<"-"<<month<<"-"<<year;
			cout<<"\nDate:="<<setw(2) << setfill('0')<<day<<"-"<<setw(2) << setfill('0')<<month<<"-"<<setw(4) << setfill('0')<<year;
			cout<<"\nDate:="<<setw(2) << setfill('0')<<day<<"-"<<setw(2) << setfill('0')<< months[month]<<"-"<<setw(4) << setfill('0')<<year;
		}
};

	int main()
	{
		Date d1;
		d1.setdate();
		d1.display();
	}
