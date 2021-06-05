#include<iostream>
#include<windows.h>
#include <unistd.h>
using namespace std ;


int main()
{
	cout<<"\n\n\n\n\t\t\t\t\tLOADING\n\t\t";
	char x=219;
	for(int i=0;i<60;i++)
	{
		Sleep(60);
		cout<<x;
	}	
	return 0 ;
}
