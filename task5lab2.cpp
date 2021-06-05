#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;


float cal_tax(float per,int time,int hr)
{
	
	float t ;
	t=hr*time*(per/100);
	return t ;
	
	
	
	
}



int main()
{
	
	cout<<"WELCOME TO J&J ACCOUNTING FIRM"<<endl<<"=====================================";
	cout<<endl<<"Enter user's hourly rate ($) :";
	int h_rate;
	
	cin>>h_rate;
	cout<<"Enter the consulting time (minutes) :";
	int c_time;
	cin>>c_time;
	cout<<"Enter your income : $";
	int income;
	cin>>income;
	float tax;
	if(income<=25000)
	{
		if(c_time<=30)
		{
			cout<<"NO CHARGES APPLICABLE ...!INCOME TOO LOW";
			//break;
		}
		else
		{
			tax=cal_tax(0.40,c_time,h_rate);
			cout<<endl<<"TAX DUE IS : $"<<tax;
			//break;
		}
		
	}
	else
	{
		if(c_time<=20)
		{
			cout<<"NO CHARGES APPLICABLE...CONSULTING TIME TOO LOW!";
			//break;
		}
		else
		{
			tax=cal_tax(0.70,c_time,h_rate);
			cout<<endl<<"TAX DUE IS : $"<<tax;
			//break;
		}
		
		
	}
	
		
	return 0 ;
	
}
