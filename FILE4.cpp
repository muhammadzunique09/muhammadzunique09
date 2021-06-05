#include<iostream>
#include<fstream>
using namespace std ;

class Person{
	string name , address;
	int age , salary ; 
	
	public:
		void input()
		{
			cout<<"Enter Your Name : ";
			getline(cin,name);
			cin.ignore();
			cout<<"Enter Your Address : ";
			getline(cin,address);
			cin.ignore();
			cout<<"Enter Age  : ";
			//cin.ignore();
			cin>>age;
			cout<<"Enter Salary : $";
			cin.ignore();
			cin>>salary ;
		}
		void show()
		{
			cout<<"Name : "<<name
				<<"\nAddress : "<<address
				<<"\nAge : "<<age
				<<"\nSalary : $"<<salary ;
		}
		
		void store_to_file()
		{
			fstream fout;
			fout.open("NO_4.dat",ios::app | ios::binary);
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
};

int main()
{
	Person p ;
	p.input();
	p.show();
	p.store_to_file();
	return 0 ;
}
