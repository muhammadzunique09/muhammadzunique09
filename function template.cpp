//Write a program that uses function templates to swap numbers
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

template <class T1 , class  T2>
float swap_two_numbers(T1& a , T2& b)
{
	T1 temp ;
	temp = a ;
	a = b   ;
	b = temp ;
}



int main()
{

	
	float a = 2.2 ;
	int b = 4 ;
	swap_two_numbers( a , b );
	cout<<"a = "<<a<<"\tb = "<<b<<endl; 
	
	
	

	return 0 ;

}
//end of main//

