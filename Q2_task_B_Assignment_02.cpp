/*
PROBLEM STATEMENT:

Start with the publication, book, and tape classes of “Task A”. Add a base class sales that holds
an array of three floats so that it can record the dollar sales of a particular publication for the last
three months. Include a getdata() function to get three sales amounts from the user, and a
putdata() function to display the sales figures. Alter the book and tape classes so they are derived
from both publication and sales. An object of class book or tape should input and output sales
data along with its other data. Write a main() function to create a book object and a tape object
and exercise their input/output capabilities.

*/


#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;

//BASE CLASS 1
class Publication {
	private:  //private data members
		string title;
		float price;
		
	public:   //public data member and functions
		
		//setters//
		void set_title(string title)
		{
			this->title = title;
		}
		
		void set_price(float price)
		{
			this->price = price;
		}
		
		//getters//
		string get_title()
		{
			return title;
		}
		float get_price()
		{
			return price;
		}
		
		//default constructor//
		Publication()
		{
			
		}
		
		//input function//
		void get_data()
		{
			cout<<"Enter the Title : ";
			getline(cin,title);
			fflush(stdin);
			cout<<"Enter Price : ";
			cin>>price;
			fflush(stdin);
		}
		
		//display function//
		void put_data()
		{
			cout<<"TITLE : "<<title<<endl;
			cout<<"PRICE : $ "<<price<<endl;
		}	
};

//BASE CLASS 2 
class Sales{
	private: //private data members
		float sale_month[3];
		
	public:
		//setter//
		void set_sale_month(float sale_month[3])
		{
			this->sale_month[3] = sale_month[3];
		}
		
		//getter//
		float* get_sales()
		{
			return sale_month;
		}
		
		//input function//
		void get_data()
		{
			cout<<"Monthly Sales : "<<endl<<"-------------"<<endl;
			for(int i =0 ;i<3;i++)
			{
				cout<<"Sales for Month "<<i+1<<" : $ ";
				cin>>sale_month[i];
			}
		}
		
		//display//
		void put_data()
		{
			cout<<"Monthly Sales : "<<endl<<"-------------"<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Sale for Month "<<i+1<<" : $ "<<sale_month[i]<<endl;
			}
		}
		
		//defualt constrcutor//
		Sales()
		{
			
		}
		
	
};

//derived class

class Book:public Publication,public Sales{
	private:  //private data members
		int no_of_page;
		
	public:  //public data member and functions
		
		//setter//
		void set_pages(int no_of_page)
		{
			this->no_of_page = no_of_page;
		}
		
		//getter//
		int get_pages()
		{
			return no_of_page;
		}
		
		//input function//
		void get_data()
		{
			cout<<"TAKING ENTRY FOR BOOK "<<endl<<"====================="<<endl<<endl;
			Publication::get_data();
			fflush(stdin);
			cout<<"Enter number of pages : ";
			cin>>no_of_page;
			fflush(stdin);
			Sales::get_data();
		}
		
		//display function//
		void put_data()
		{
			cout<<"Book DETAILS : "<<endl<<"----------------"<<endl<<endl;
			Publication::put_data();
			cout<<"Number of Pages : "<<no_of_page<<endl;
			Sales::put_data();
			cout<<endl<<endl<<endl;
		}
		
		
};

//derived class//
class Audiocassette :public Publication,public Sales{
		float time;
		
	public:  //public data member and functions
		
		//setter//
		void set_time(float time)
		{
			this->time = time;
		}
		
		//getter//
		int get_time()
		{
			return time;
		}
		
		//input function//
		void get_data()
		{
			cout<<endl;
			cout<<"TAKING ENTRY FOR Audiocassette "<<endl<<"=============================="<<endl<<endl;
			fflush(stdin);
			Publication::get_data();
			cout<<"Enter Time of Audiocassette in minutes  : ";
			cin>>time;
			fflush(stdin);
			Sales::get_data();
		}
		
		//display function//
		void put_data()
		{
			cout<<"Audiocassette DETAILS : "<<endl<<"-----------------------"<<endl<<endl;
			Publication::put_data();
			cout<<"Time of Audiocassette : "<<time<<" minutes"<<endl;
			Sales::put_data();
			cout<<endl;
		}	
};

int main()
{
	//creating objects//
	Book book;  
	Audiocassette  audio ;
	
		//calling of input functions//
		system("CLS");
		fflush(stdin);
		book.get_data();
		fflush(stdin);
		audio.get_data();
		
		system("CLS");
		//calling of display functions//
		book.put_data();
		audio.put_data();
		
		return 0 ;
}

