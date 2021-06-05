/*
PROBLEM STATEMENT

Suppose you want to add the date of publication for both books and tapes. From the publication
class, derive a new class called publication2 that includes this member data. Then change book
and tape so they are derived from publication2 instead of publication. Make all the necessary
changes in member functions so the user can input and output dates along with the other data.

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

class Publication2:public Publication{
	private: //private data members
		string date;
		
	public:
		Publication2()
		{
			
		}
		
		//setters/
		void set_date(string date)
		{
			this->date = date;
		}
		
		//getter//
		string get_date()
		{
			return date;
		}
		
		//input function//
		void get_data()
		{
			Publication::get_data();
			fflush(stdin);
			cout<<endl<<"Enter date of Publication : ";
			getline(cin,date);
		}
		
		//display function//
		
		void put_data()
		{
			Publication::put_data();
			cout<<"DATE OF PUBLICATION : "<<date<<endl;
		}
};


//derived class

class Book:public Publication2{
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
			Publication2::get_data();
			fflush(stdin);
			cout<<"Enter number of pages : ";
			cin>>no_of_page;
		}
		
		//display function//
		void put_data()
		{
			cout<<"Book DETAILS : "<<endl<<"----------------"<<endl<<endl;
			Publication2::put_data();
			cout<<"Number of Pages : "<<no_of_page<<endl<<endl<<endl;
		}
		
		
};

//derived class//
class Audiocassette :public Publication2{
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
			Publication2::get_data();
			cout<<"Enter Time of Audiocassette in minutes  : ";
			cin>>time;
		}
		
		//display function//
		void put_data()
		{
			cout<<"Audiocassette DETAILS : "<<endl<<"-----------------------"<<endl<<endl;
			Publication2::put_data();
			cout<<"Time of Audiocassette : "<<time<<" minutes"<<endl;
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
