#include<iostream>

#include<conio.h>
using namespace std;

class user{
	public:
		int age ;
		string name ;
		
		void get_name()
		{
				cout<<"Enter the name of object :";
				cin>>name;
		}
		void get_age()
		{
				cout<<"Enter the age of object :";
				cin>>age;
				
		}
		void show_date()
		{
			cout<<"My name is "<<name <<" and age is "<<age<<".";
		}
		
	
};

int main()
{
	user c1;
	c1.get_age();
	c1.get_name();
	c1.show_date();
	
	
	return 0 ;
	
}

