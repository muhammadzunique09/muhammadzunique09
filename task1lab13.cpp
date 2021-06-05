//Write a program that uses function templates to swap numbers
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

template <class T1 >
float swap_two_numbers(T1 & a , T1 & b)
{
	T1 temp ;
	temp = a ;
	a = b   ;
	b = temp ;
}



int main()
{
	int x = 2 , y = 4 ;
	swap_two_numbers(x,y);
	cout<<"x = "<<x<<"\ty = "<<y<<endl;
	
	float a = 2.2 , b = 4.3 ;
	swap_two_numbers(a,b);
	cout<<"a = "<<a<<"\tb = "<<b<<endl; 
	
	
	

	return 0 ;

}
//end of main//

