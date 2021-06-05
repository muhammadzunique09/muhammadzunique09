/*
PROBLEM STATEMENT
Assume that the publisher in “Task A and B” decides to add a third way to distribute books: on
computer disk, for those who like to do their reading on their laptop. Add a disk class that, like
book and tape, is derived from publication. The disk class should incorporate the same member
functions as the other classes. The data item unique to this class is the disk type: either CD or
DVD.
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


//Derived class//
class Disk:public Publication{
	private:  //private data members
		int cd;
		int dvd;
		int pr_cd;
		int pr_dvd;
		int total;
		
	public: //public data members and functions
	
	//constructor//
	
	Disk()
	{
		
	}
	
	//setter//
		void set_cd(int cd)
		{
			this->cd = cd;
		}
		void set_dvd(int dvd)
		{
			this->dvd = dvd ;
		}
	//getter//
		int get_dvd()
		{
			return dvd ;
		}
		int get_cd()
		{
			return dvd ; 
		}
		
		//input function//
		void get_data()
		{
			cout<<endl;
			cout<<"TAKING ENTRY FOR DISKS "<<endl<<"======================"<<endl<<endl;
			cout<<"Enter Title : ";
			string t ;
			getline(cin,t);
			set_title(t);
			fflush(stdin);
			cout<<"Enter CD's Price : $ ";
			cin>>pr_cd;
			fflush(stdin);
			cout<<"Enter DVD's Price : $ ";
			cin>>pr_dvd;
			fflush(stdin);
			cout<<"Enter Number of DVD's Sold : ";
			cin>>dvd;
			fflush(stdin);
			cout<<"Enter Number of CD's Sold : ";
			cin>>cd;
		}
		
		//display function//
		void put_data()
		{
			cout<<"DISKS DETAILS : "<<endl<<"-----------------------"<<endl<<endl;
			cout<<"Title : "<<Publication::get_title()<<endl;
			cout<<"Price of CD : $ "<<pr_cd;
			cout<<endl<<"Price of DVD : $ "<<pr_dvd;		
			cout<<endl<<"Number of CD's sold : "<<cd<<endl;
			cout<<"Number of DVD's sold  : "<<dvd<<endl;
			cout<<"Total Amount for CD's and DVD's sold is : $ "<<(cd)*(pr_cd)+(dvd)*(pr_dvd);
		}
};

//main driver code//
int main()
{
	//creaing objects
	Disk disk;
	disk.get_data();
	system("CLS");
	disk.put_data();
	
}
