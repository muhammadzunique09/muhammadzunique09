/*
PROBLEM STATEMENT: 

Imagine a publishing company that markets both book and audiocassette versions of its works.
Create a class publication that stores the title (a string) and price (type float) of a publication. From
this class derive two classes: book, which adds a page count (type int), and tape, which adds a
playing time in minutes (type float). Each of these three classes should have a getdata() function
to get its data from the user through console, and a putdata() function to display its data. Write a
main() program to test the book and tape classes by creating instances of them, asking the user to
fill in data with getdata(), and then displaying the data with putdata()


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



//derived class

class Book:public Publication{
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
		}
		
		//display function//
		void put_data()
		{
			cout<<"Book DETAILS : "<<endl<<"----------------"<<endl<<endl;
			Publication::put_data();
			cout<<"Number of Pages : "<<no_of_page<<endl<<endl<<endl;
		}
		
		
};

//derived class//
class Audiocassette :public Publication{
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
		}
		
		//display function//
		void put_data()
		{
			cout<<"Audiocassette DETAILS : "<<endl<<"-----------------------"<<endl<<endl;
			Publication::put_data();
			cout<<"Time of Audiocassette : "<<time<<" minutes"<<endl;
		}
	
};


//MAIN DRIVER CODE//
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

//****END OF MAIN*****//
