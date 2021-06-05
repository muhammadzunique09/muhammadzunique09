#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

 struct menu{
	string menuitem;
	float p1=0.0,p2=0.0,p3=0.0,p4=0.0,p5=0.0,p6=0.0,p7=0.0,p8=0.0; //price
	
	
};

int main()
{
	int qty1=0,qty2=0,qty3=0,qty4=0,qty5=0,qty6=0,qty7=0,qty8=0	;
	struct menu m;
	
	hello:
		system("CLS");	
		cout<<endl<<endl<<"THE BAKERS"<<endl<<"*******************"<<endl<<endl;
		cout<<"Breakfast Items"<<endl;
		cout<<"[1].Plain Egg = $1.45"<<endl;
		cout<<"[2].Bacon and Egg = $2.45"<<endl;
		cout<<"[3].Muffin = $0.99"<<endl;
		cout<<"[4].French Toast = $1.99"<<endl;
		cout<<"[5].Cereals = $0.69"<<endl;
		cout<<"[6].Fruit basket = $2.49"<<endl;
		cout<<"[7].Coffee = $0.50"<<endl;				
		cout<<"[8].Tea = $0.75"<<endl;
		cout<<"[9].Bill"<<endl;	
		
		int ch;
		cout<<"Select the type of breakfast :";
		cin>>ch;
		
		

	 
	switch(ch)
	{
	
		case 1 :
			cout<<"Enter the Quantity :";
			cin>>qty1;
			
			m.p1=1.45*qty1;
			goto hello;
			
		case 2 :
			cout<<"Enter the Quantity :";
			cin>>qty2;
			m.p2=2.45*qty2;
			goto hello;	
			
		case 3 :
			cout<<"Enter the Quantity :";
			cin>>qty3;
			m.p3=0.99*qty3;
			goto hello;		
			
		case 4 :
			cout<<"Enter the Quantity :";
			cin>>qty4;
			m.p4=1.99*qty4;
			goto hello;
			
		case 5 :
			cout<<"Enter the Quantity :";
			cin>>qty5;
			m.p5=2.49*qty5;
			goto hello;
			
		case 6 :
			cout<<"Enter the Quantity :";
			cin>>qty6;
			m.p6=0.69*qty6;
			goto hello;
			
		case 7 :
			cout<<"Enter the Quantity :";
			cin>>qty7;
			m.p7=0.50*qty7;
			goto hello;
			
		case 8 :
			cout<<"Enter the Quantity :";
			cin>>qty8;
			m.p8=0.75*qty8;
			goto hello;
		
		double total;
		total=m.p1+m.p2+m.p3+m.p4+m.p5+m.p6+m.p7+m.p8;
	
		double net;
		net=(total+(total)*(5/100));
		
		
			
		case 9 :
		
			system("CLS");
			cout<<"WELCOME TO THE BAKERS"<<endl<<"*****************************"<<endl;
			cout<<"ITEM"<<"\t\tQuantity"<<"\tPrice"<<endl<<"==========================================="<<endl;
			cout<<"Plain Egg"<<"\t"<<qty1<<"\t"<<"\t$"<<m.p1<<endl;
			cout<<"Bacon and Egg"<<"\t"<<qty2<<"\t"<<"\t$"<<m.p2<<endl;
			cout<<"Muffin"<<"\t\t"<<qty3<<"\t"<<"\t$"<<m.p3<<endl;
			cout<<"French Toast"<<"\t"<<qty4<<"\t"<<"\t$"<<m.p4<<endl;
			cout<<"Fruit Basket"<<"\t"<<qty5<<"\t"<<"\t$"<<m.p5<<endl;
			cout<<"Cereal"<<"\t\t"<<qty6<<"\t"<<"\t$"<<m.p6<<endl;
			cout<<"Coffee"<<"\t\t"<<qty7<<"\t"<<"\t$"<<m.p7<<endl;
			cout<<"Tea"<<"\t\t"<<qty8<<"\t"<<"\t$"<<m.p8<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"Total " <<"\t\t\t\t"<<m.p1+m.p2+m.p3+m.p4+m.p5+m.p6+m.p7+m.p8<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"GST"<<"\t\t\t\t"<<(m.p1+m.p2+m.p3+m.p4+m.p5+m.p6+m.p7+m.p8)*0.05<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"Net Amount " <<"\t\t\t"<<(m.p1+m.p2+m.p3+m.p4+m.p5+m.p6+m.p7+m.p8)+((m.p1+m.p2+m.p3+m.p4+m.p5+m.p6+m.p7+m.p8)*0.05)<<endl;
			cout<<"THANK YOU ...!"<<endl;
			
			
		
	}	
		
		
		
	
	
	
	
	
	
	return 0 ;
}
