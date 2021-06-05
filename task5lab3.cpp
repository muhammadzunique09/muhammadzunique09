#include<iostream>
using namespace std;

class Book
{
	private:
		string book_name;
		string ISBN;
		string author_name;
		string pub;
	public:
		void setbook_name(string a)
		{
			book_name=a;
		}
		void set_ISBN(string b)
		{
			ISBN=b;
		}
		void setauthor_name(string c)
		{
			author_name=c;
		}
		void set_publisher(string d)
		{
			pub=d;
		}	
		
void getBookInfo()
{

	cout<<"Book Name"<<book_name  <<endl;
	cout<<"ISBN Number"<<ISBN  <<endl;
	cout<<"Author Name"<<author_name  <<endl;
	cout<<"Publisher Name"<<pub  <<endl;
}
		
};



int main()
{
	int i;
	Book b[5];
	string b_Name;
	string IS;
	string aut_Name;
	string pub;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter information of book "<<i+1<<endl ;
		cout<<"Enter Book Name ";
		cin>>b_Name;
		b[i].setbook_name(b_Name);	
		cout<<"Enter ISBN Number ";
		cin>>IS;
		b[i].set_ISBN(IS);	
		cout<<"Enter Auther Name ";
		cin>>aut_Name;
		b[i].setauthor_name(aut_Name);	
		cout<<"Enter Publisher Name ";
		cin>>pub;
		b[i].set_publisher(pub);	
	}
	system("cls");
	for(i=0;i<5;i++)
	{
		cout<< "information of book  "<<i+1<<"============================"<<endl; 
		b[i].getBookInfo();
	}
}	
