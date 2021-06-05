#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<fixed<<setprecision(1);
	
	int a = 3 , b = 7 ;
	float c = 5.5 , d = 1.5 ;
	
	cout<<a<<"+"<<b<<"="<<a+b <<endl;
	cout<<a<<"*"<<b<<"="<<a*b <<endl;
	cout<<a<<"/"<<b<<"="<<a/b <<endl;
	cout<<a<<"-"<<b<<"="<<a-b <<endl;
	
	cout<<c<<"+"<<d<<"="<<c+d <<endl;
	cout<<c<<"*"<<d<<"="<<c*d <<endl;
	cout<<c<<"/"<<d<<"="<<c/d <<endl;
	cout<<c<<"-"<<d<<"="<<c-d <<endl;
	
	cout<<a<<"+"<<c<<"="<<a+c <<endl;
	cout<<a<<"*"<<c<<"="<<a*c <<endl;
	cout<<a<<"/"<<c<<"="<<a/c <<endl;
	cout<<a<<"-"<<c<<"="<<a-c <<endl;
	
	return 0 ;
}
