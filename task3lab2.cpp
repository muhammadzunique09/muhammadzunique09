#include<iostream>
#include<conio.h>

using namespace std;

float cal_bill(int min)
{
	
	float amount;
	int temp;
	if(min<=50)
	{
		amount=10;
		cout<<"since minutes are less or equal to 50 , therefore no extra charges";
	}
	else 
	{
		temp=min-50;
		amount=10+(temp)*(0.2);
	}
	return amount;
	
	
}
float cal_bill2(int am,int pm)
{
	float amount1,amount2,t_amount;
	int temp1,temp2;
	if(am<=75)
	{
		amount1=25;
		
	}
	
	else
	{
		temp1=am-75;
		amount1=25+(temp1)*(0.1);
	}
	if(pm<=100)
	{
		amount2=25;
	}
	else
	{
		temp2=pm-100;
		amount2=25+(temp2)*(0.05);
	}
	t_amount=amount1+amount2;
		
	return t_amount;
}


int main()
{
	int choice;
	
	menu:
		//system("CLS");
		cout<<endl<<endl<<endl;
		cout<<endl<<"CELLULAR TELEPHONE COMPANY"<<endl<<"=========================="<<endl;
		cout<<"[1].Regular"<<endl<<"[2].Premium"<<endl;
		cout<<"Service codes are as follows :"<<endl<<"Regular : r or R"<<endl<<"Premium : p or P"<<endl;
		cout<<"press 1 for regular and 2 for premium :";
		cin>>choice;
		float bill;
	switch(choice)
	{
		case 1:
			
			system("CLS");
			cout<<"REGULAR TYPE"<<endl<<"=================="<<endl;
			cout<<"Enter the account number :";
			int acc;
			cin>>acc;
			cout<<"Enter the service code :";
			char s_code;
			cin>>s_code;
			if(s_code == 'r')
			{
				cout<<"Enter the number of minutes used :";
				int mins;
				cin>>mins;
				bill=cal_bill(mins);
				cout<<endl<<"=============="<<endl<<"FINAL BILL"<<endl<<"============="<<endl;
				cout<<endl<<"Account Number       : "<<acc;
				cout<<endl<<"Service code         : "<<s_code;
				cout<<endl<<"Minutes used         : "<<mins;
				cout<<endl<<"Amount Due           : "<<bill;
				goto menu;
				
			}
			
			else 
			{
				cout<<"Error..!";
				goto menu;
			}
			
		case 2:
			system("CLS");
			cout<<"PREMIUM TYPE"<<endl<<"============="<<endl;
			cout<<"Enter the account number :";
			
			cin>>acc;
			cout<<"Enter the service code :";
			
			cin>>s_code;
			if(s_code=='p')
			{
				cout<<"Enter the number of minutes used during day time 6AM TO 6PM :";
				int day;
				cin>>day;
				cout<<"Enter the number of minutes used during night time 6PM TO 6AM :";
				int ngt;
				cin>>ngt;
				bill=cal_bill2(day,ngt);
				cout<<endl<<"=============="<<endl<<"FINAL BILL"<<endl<<"============="<<endl;
				cout<<endl<<"Account Number               : "<<acc;
				cout<<endl<<"Service code                 : "<<s_code;
				cout<<endl<<"Minutes used (day)           : "<<day;
				cout<<endl<<"Minutes used (night)         : "<<ngt;
				cout<<endl<<"Amount Due                   : "<<bill;
				goto menu;
				
				
				
				
			}
			else
			{
				cout<<"Error..!";
				
				goto menu;
			}
				
			
		
		
		
	}
	
	
	
	
	
	return 0 ;
}
