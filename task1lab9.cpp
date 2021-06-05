#include<iostream>
#include<stdlib.h>
using namespace std ; 

class Prefix{

	
	public:
		float num1 ; 
		float num ;
		Prefix()
		{
			
		}
		~Prefix()
		{
			
		}
		void operator --()
		{
			num *= 4 ;
		}
		void operator --(int)
		{
			num1 /= 4 ;
		}
		void input()
		{

			cout<<"\nEnter the number postfix : ";
			cin>>num1;
		}
		void display1()
		{
			cout<<"\nNumber after '--' as prefix  is :  "<<num;
		}
		void display2()
		{
			cout<<"\nNumber after '--' as postfix  is :  "<<num1;
		}	
};
int main()
{
	Prefix p1;

	cout<<"\nEnter the number  for prefix : ";
	cin>>p1.num;
	--p1;
	p1.display1();
	
	cout<<"\nEnter the number postfix : ";
	cin>>p1.num1;
	p1 --;
	p1.display2();
}
