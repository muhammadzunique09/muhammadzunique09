#include<iostream>
#include<stdlib.h>
using namespace std ;
 

class Car{
	
	string model;
	public:
		int price;
		virtual void set_price(int price)=0;
		void set_model(string model)
		{
			
			this->model = model ;
		}
		string get_model()
		{
			return model;
		}
		int get_price()
		{
			return price;
		}
		virtual void input()=0;
		virtual void display()=0;	
};
class Color:public Car{
	string color;
	public:
		int p ;
			void set_price(int p)
			{
				this->price = p ;
			}
		void input()
		{
			string m ;
			cout<<"\n\nCOLOR CLASS\n\n";
			cout<<"Enter Model Name : ";
			getline(cin,m);
			set_model(m);
			cout<<"Enter Price : ";
			cin>>p;
			fflush(stdin);
			cout<<"Enter Color : ";
			getline(cin,color);
		}
		void display()
		{
			cout<<"\n\nCOOLOR CLASS\n\n";
			cout<<"MODEL : "<<get_model()<<endl;
			cout<<"PRICE : $ "<<p<<endl;
			cout<<"COLOR : "<<color<<endl;
		}
	
};
class Company:public Car{
		string company;
		public:
		int p ;
			void set_price(int p)
			{
				this->price = p ;
			}
		void input()
		{
			string m ;
			cout<<"\n\nCOMPANY CLASS\n\n";
			cout<<"Enter Model Name : ";
			getline(cin,m);
			set_model(m);
			cout<<"Enter Price : ";
			cin>>p;
			fflush(stdin);
			cout<<"Enter Company : ";
			getline(cin,company);
		}
		void display()
		{
			cout<<"\n\nCOMPANY CLASS\n\n";
			cout<<"MODEL : "<<get_model()<<endl;
			cout<<"PRICE : $ "<<p<<endl;
			cout<<"COMPANY : "<<company<<endl;
		}
	
};
int main()
{

	Color col ;
	col.input();
	col.display();
	Company com;
	com.input();
	com.display();
	
}
