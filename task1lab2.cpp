#include<iostream>
#include<conio.h>
using namespace std;

res_bill()
{
	float bpf1=4.50;  ///bill processing fee
	float bsf1=20.50; //basic service fee
	float pc1=7.50;  //rate per premium channel
	int pcn1; //number of premium channels if any
	cout<<"Have you subscribed any premium channels "<<endl;
	cout<<"If yes , please enter number of channel subscribed else zero :";
	cin>>pcn1;
	
	float bill1;
	bill1=bpf1+bsf1+(pc1)*(pcn1);
	
	return bill1;
	
	
}

buis_bill()
{
	
	float bpf2=15.00;  ///bill processing fee
	float bsf2=75.00; //basic service fee for 1st 10 connections
	float pc2=50.00;  //rate per premium channel
	int bsc2; //number of basic servivr connections
	float bill2;
	int pc; //no. of premium chANNELS
	cout<<"Number of premium channels :";
	cin>>pc;
	cout<<"Enter the number of basic servive connections :";
	cin>>bsc2;
	if(bsc2<=10)
	{
		bill2=bpf2+(pc2)*(pc)+(bsc2)*(bsf2);
		return bill2;
		
	}
	else if(bsc2>10)
	{
		int bs; //for rest bsc
		bs=bsc2-10;
		bill2=bpf2+(pc2)*(pc)+(bsc2)*(bsf2)+(bs)*(5);
		return bill2;
		
	}
	
	
	
}


int main()
{	int choice;
	int acc;
	float bill_amount1,bill_amount2;

	menu:
		
		cout<<endl<<"======================================================"<<endl;
		cout<<"\t\tLOCAL CABLE COMPANY"<<endl<<endl;
		cout<<"\t\t[1].Residential Costumer"<<endl<<"\t\t[2].Buisness Costumer"<<endl<<endl;
		cout<<"1 for Residential and 2 for Buisness "<<endl;
		cout<<"Select your choice ??";
		cin>>choice;
	
	switch(choice)
	{
		case 1:
			
			system("CLS");
			cout<<"Enter Your Account Number :";
			cin>>acc;
			cout<<"\t\tRESIDENTIAL COSTUMER"<<endl<<"\t\t===================";
			cout<<endl<<endl<<"Bill Processing : $4.50"<<endl<<"Basic Servive Fee : $20.50"<<endl<<"Premium Channels : $7.50/channel"<<endl;
			bill_amount1=res_bill();
			cout<<"Account Number :"<<acc;
			cout<<endl;
			cout<<"Total Amount Due : $"<<bill_amount1;
			
			goto menu;
			
		case 2:
			
			system("CLS");
			cout<<"Enter Your Account Number :";
			cin>>acc;
			cout<<"\t\tBUISNESS COSTUMER"<<endl<<"\t\t===================";
			cout<<endl<<endl<<"Bill Processing : $15.00"<<endl<<"Basic Servive Fee : $75.00 for first 10 and $5 for rest of each"<<endl<<"Premium Channels : $50.00/channel"<<endl;
			bill_amount2=buis_bill();
			cout<<"Account Number :"<<acc;
			cout<<endl;
			cout<<"Total Amount Due : $"<<bill_amount2;
			
			goto menu;
			
			
	}
	
	
	
	return 0 ;
}
