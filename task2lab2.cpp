#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

float fimc1(float l1 )
{	
	//cout<<"The entered lenght  in inches is"<<" "<<l1*12<<endl;
	cout<<"The entered lenght  in meters is"<<" "<<l1*0.3<<endl;
	cout<<"The entered lenght  in centimeters is"<<" "<<l1*30.48<<endl;
	
	
}

float mcif(float l2)
{
	cout<<"The entered lenght in centimeters is "<<" "<< l2*100<<endl;
	cout<<"The entered lenght in inches is "<<" "<< l2*3.2<<endl;
	cout<<"The entered lenght in foots is "<<" "<< l2*39.37<<endl;
	
}

void sw_choice()
{
	int c ;
	
	
	cout<<endl<<endl;
	cout<<"[1].Feet and inches to meters and centimeters"<<endl<<"[2].Meters and centimeters to feet and inches"<<endl;
	cout<<"Select your choice :";
	cin>>c;
	float len1;
	float len2;
	

	
	switch(c)
	{
		case 1:
			//cout<<"Enter the lenght in feet or inches:";
			char lf;
			 char i , f ;
			cout<<"[1].FROM FOOT TO METERS AND CENTIMETERS"<<endl<<"[2].FROM INCHES TO METERS AND CENTIMETERS"<<endl;
			cout<<"press 'f' from feet to other and 'i' from inches to other"<<endl;
			cout<<"select ??";
			cin>>lf;
			switch(lf)
			{
				case "f"||"F" :
					cout<<"Enter the lenght in feet :";
					cin>>len1;
					fimc1(len1);  //Feet and  to meters and centimeters
					break;
			}
				case "i"||"I":
					cout<<"Enter the lenght in inches :";
					cin>>len1;
					fimc1(len1);  //inches and  to meters and centimeters
					break;
			
			sw_choice();
			
		
		case 2:
			cout<<"Enter lenght in meters:";
			cin>>len2;
			mcif(len2); //Meters and centimeters to feet and inches
			sw_choice();
	}
}


int main()
{
	
	cout<<"WELCOME TO LENGHT CONVERTER :"<<endl;
	
	while(true)
	{
		sw_choice();	
	}
	
	return 0 ;
	
}
