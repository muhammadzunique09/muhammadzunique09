#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	
	ofstream of("first.txt");
	of<<"hello my name is zunique goes Brrrrr";
	of.close();
	string str;
	ifstream iff("first.txt");
	getline(iff , str);
	if(getline(iff , str) != "NULL")
	{
		cout<<"file read successfully";
		cout<<endl<<str;
		cout<<endl<<str.size()<<" is the lenght of string ";
	}
	else{
		cout<<"File not Found";
	}
	iff.close();
	
	
	return 0 ;
}
