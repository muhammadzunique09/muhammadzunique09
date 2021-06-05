#include<iostream>
#include<stdlib.h>
using namespace std;

class books
{
    public:
	string genre;

};

class book1: public books
{
    public:
	string author;
	string title;
	
	void b1_details()
	{
	fflush(stdin);
	cout<<endl<<" BOOK # 01 " <<endl;
	cout<<"Genre Type : ";
	cin>>genre;
	fflush(stdin);
	cout<<"Author's Name : '";
	cin>>author;
	fflush(stdin);
	cout<<"Book Title : ";
	cin>>title;
	cout<<endl;
	}
		
};

class book2 : public books
{
    public:
	string author1;
	string title1;


void b2_details()
{
	cout<<endl<<"BOOK # 02 " <<endl;
	fflush(stdin);
	cout<<"Genre Type : ";
	cin>>genre;
	fflush(stdin);
	cout<<"Author's Name : ";
	cin>>author1;
	fflush(stdin);
	cout<<"Book Title : ";
	cin>>title1;
	cout<<endl;
}
};

int main()
{
	book1 b1;
	book2 b2;
	
	b1.b1_details();
	b2.b2_details();
	
	system("CLS");
	cout<<endl<<" BOOK # 01 " <<endl;
	cout<<"Genre Type : "<<b1.genre<<endl;
	cout<<"Author's Name :"<<b1.author<< endl;
	cout<<"title "<<	b1.title <<endl;
	cout<<endl<<" BOOK # 02 " <<endl;
	cout<<"Genre Type : "<<b2.genre<<endl;
	cout<<"Author's Name :"<< b2.author1 << endl;
	cout<<"Book Title :"<<b2.title1 <<endl;
	

	
}
