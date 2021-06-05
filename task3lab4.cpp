#include<iostream>
#include<cmath>
#include<conio.h>
#include<stdlib.h>
using namespace std ;

class invoice{
	private:
		string part_no;
		string des;
		int qty;
		int pur;
		float price;
		
	public:
		invoice()   //constructor
		{
			part_no="0xdfcb";
			des="NO WAY I WILL NOT TELL YOU ANYTHING";
			qty = 0 ;
			pur = 0 ;
		}
		//********SETTERS************
		void set_part_num(string p)
		{
			part_no = p ;
		}
		void set_des(string ds)
		{
			des = ds ;
		}
		void set_qty(int qt)
		{
			qty = qt ;
		}
		void set_pur(int pu)
		{
			pur = pu;
		}
		void set_price(double pr)
		{
			price = pr;
		}
		
		//**********GETTRERS*************
		double cal_invoice()
		{
			int inv;
			if(pur<0 || price < 0)
			{
				inv = 0.0;
			}

			else
			{
				inv = pur*price;
			}
			
			return inv;
		}
		string get_part()
		{
			return part_no;
		}
		string get_des()
		{
			return des;
		}
		int get_qty()
		{
			return qty;
		}
		int get_pur()
		{
			return pur;
		}
		double get_price()
		{
			return price;
		}
		
		
		

	
};

int main()
{
	invoice i ;   //class object
	string pn,d;
	int q , pur ;
	double p;
	
	cout<<"Enter the hardware part number :";
	cin>>pn;
	i.set_part_num(pn);
	cout<<"Enter the related description : ";
	fflush(stdin);
	cin>>d;
	i.set_des(d);
	cout<<"Enter the number of Quantity :";
	fflush(stdin);
	cin>>q;
	i.set_qty(q);
	cout<<"Enter the Items purchased :";
	fflush(stdin);
	cin>>pur;
	i.set_pur(pur);
	cout<<"Enter the price per item :";
	fflush(stdin);
	cin>>p;
	i.set_price(p);
	
	cout<<endl<<endl<<"FINAL INVOICE "<<endl<<"=============="<<endl;
	cout<<"Part Number : "<<i.get_part()<<endl;
	cout<<"Description : "<<i.get_des()<<endl;
	cout<<"Items purchased : "<<i.get_pur()<<endl;
	cout<<"Price per Item : $"<<i.get_price()<<endl;
	cout<<"Total Invoice : $"<<i.cal_invoice()<<endl;
	
	
	
	return 0 ;
}

