#include<iostream>
#include<conio.h>
#include<cmath>
#include<stdlib.h>
#include<string.h>
using namespace std ;


class book
{
	private :   //private members
		string author;
		string title;
		double price;
		string publisher;
		int stock_pos;
	public:   //public members
		book()  //default constructor
		{
			
		}
		//**********SETTERS*************
		void set_aut(string a)
		{
			author = a;
		}
		void set_title(string t )
		{
			title = t;
		}
		void set_price(float p )
		{
			price = p ;
		}
		void set_pub(string pu)
		{
			publisher = pu ;
		}
		void set_stock(int st)
		{
			stock_pos = st ;
		}
		//*********GETTERS**************
		string get_aut()
		{
			return author;
		}
		string get_title()
		{
			return title;
		}
		string get_pub()
		{
			return publisher;
		}
		double get_price()
		{
			return price;
		}
		int get_stock()
		{
			return stock_pos;
		}

	
};

int main()
{
	int n ;
	book b[10];   //class objects
	//attributes
	int i ,  qty , cpy ;
	double pr , pric;
	string tit,pub,auth,ser,ch;
	cout<<"Enter the number of books you want to add :";
	fflush(stdin);
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<endl<<"BOOK # "<<i+1<<endl;
		cout<<"Enter the Title of Book : ";
		fflush(stdin);
		cin>>tit;
		cout<<"Enter the  Author of Book :";
		fflush(stdin);
		cin>>auth;
		cout<<"Enter the Publisher : ";
		fflush(stdin);
		cin>>pub;
		cout<<"Enter the Price of Book : $";
		fflush(stdin);
		cin>>pr;
		cout<<"Enter the Stock available for book : ";
		fflush(stdin);
		cin>>qty;
		b[i].set_aut(auth);
		b[i].set_title(tit );
		b[i].set_price(pr );
		b[i].set_pub(pub);
		b[i].set_stock(qty);
		

	}
		for(i=0;i<n;i++)
		{
			ch = b[i].get_title();
			cout<<endl<<"Enter the Title of the book you want to search : ";
			cin>>ser;
			if(ser==ch)
			{
				cout<<endl<<"BOOK AVAILABLE";
				
				cout<<endl<<"Enter the number of copies you want :";
				fflush(stdin);
				cin>>cpy ;
				if(cpy<qty)
				{
					pric = cpy*pr ;	
				}
				else
				{
					cout<<endl<<"Required Copies are not in stock";
				}
					cout<<endl<<endl;
					cout<<"========================================="<<endl;
								
					cout<<"DETAILS AND INVOICE OF BOOK :"<<endl<<"=============================="<<endl;
					cout<<"TITLE : "<<ser<<endl;
					cout<<"AUTHOR : "<<b[i].get_aut()<<endl;
					cout<<"PUBLISHER : "<<b[i].get_pub()<<endl;
					cout<<"PRICE : $"<<b[i].get_price()<<endl;
					cout<<"COPIES : "<<cpy<<endl;
					cout<<"NET AMOUNT : $"<<pric;
			}
			else
			{
				cout<<endl<<"BOOK NOT AVAILABLE ..  >> THANK YOU FOR SEARCHING >>";
			}

					

			
			
		}	
	
	return 0 ;
}

