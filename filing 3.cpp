#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Person{
	char name[20];
	int age;
	
	public:
		Person(char *name1, int a)
		{
			strcpy(name,name1);
			age = a;
		}
		

	void get()
	{
		cout << "Name : " << name;
		cout << endl << "Age: " << age;
	}
		void addFile()
		{
			ofstream fout;
			fout.open("dumy.txt", ios::out);
			fout.write((char*)this , sizeof(*this));
			fout.close();
		}
		void read()
		{
			ifstream fin;
			fin.open("dumy.txt", ios::in);
			if(!fin)
			{
				cout << "File is not exist ";
				
			}
			else
			{
				fin.read((char*)this, sizeof(*this));
				while(!fin.eof())
				{
					this->get();
					fin.read((char*)this, sizeof(*this));
				}
				fin.close();
			}
		}
};

int main()
{
	char name[20], c;
	int age;
	cout << "Enter name: ";
	cin.getline(name, 20);
	cout << "Enter age: ";
	cin >> age;
	
	Person person1(name,age);

	cout<<"adding into the file \n..............\n";
	person1.addFile();
	cout<<endl<<"Added "<<endl;

	cout<<"\n\nReading from the file  : "<<endl<<"==================="<<endl;
	person1.read();
	
	
	return 0 ;

}
