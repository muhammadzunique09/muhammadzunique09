#include<iostream>
using namespace std ; 

//handles uncertain inputs by user

int main()
{
	int *ptr ;
	menu:
		try{
			
			cout<<"\nEnter the amount you want to deposit : ";
			int x ;
			ptr = new int [x];
			cin>>*ptr;
			if(*ptr<0){
				throw 9 ;
			}
			else{
				cout<<"\nTHE  AMOUNTS IS "<<*ptr;
			}
		}
		catch(int x)
		{
			cout<<"\nINVALID INPUT\nRe-enter .......\n";
			goto menu;
		}
	
	return 0 ;
}
