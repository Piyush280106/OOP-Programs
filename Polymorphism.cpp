#include<iostream>
using namespace std;
class Shapes
{
	public:
		float a;
		void area(int r)
		{
			a=r*r*3.142;
			cout<<"Area of Circle="<<a;
		}
		void area(int l,int b)
		{
			a=l*b;
			cout<<"\nArea of rectangle="<<a;
		}
		void area(float h,float b)
		{
			a=0.5*(h*b);
			cout<<"\nArea of triangle="<<a;
		}
};
int main()
{
	float a=2,b=1;
	Shapes s;
	s.area(1);
	s.area(4,5);
	s.area(a,b);
	return 0;
	
}
