#include<iostream>
#include<iomanip>
using namespace std;





int main()
{
	
	float marks[5];
	float avg;
	string name;
	int i ;
	float sum;
	cout<<"Enter your name :";
	cin>>name;
	cout<<endl;
	cout<<"Enter marks :"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
		
		
	}
	for(i=0;i<5;i++)
	{
		
		sum+=marks[i];
		
	}
	avg=sum/5;
	cout<<endl;
	cout<<endl;
	cout<<"Name : "<<name;
	cout<<endl;
	cout<<"Marks are :";
	for(i=0;i<5;i++)
	{
		cout<<marks[i];
		cout<<"  ";
	}
	cout<<endl;
	cout<<"Average = "<<avg;
	
	return 0 ;
}
