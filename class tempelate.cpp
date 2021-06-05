//Write a program that uses class templates to search for a particular number in an array. It
//should display the number and the position at which the number is found. (The array size
//can be of your choice).
#include<iostream>
using namespace std;

template<class T>
class Search{
	T arr[10];
	public:
		void add_numbers()
		{
			for(int i = 0 ; i < 10 ; i ++)
			{
				cout<<"Enter number "<<i+1<<" : " ;
				cin>>arr[i] ;
			}
		}
		void find_in_array(T y)
		{
			cout<<"\n\nSEARCHING FOR NUMBER ...............\n " ;
			for(int i = 0 ; i < 10 ; i ++)
			{
				if(y == arr[i])
				{
					cout<<"\nNumber found..!"<<endl
						<<"The number "<<y<<" is found at "<<i<<"th index in the array . " ;
				}
			}
		}	
};

int main()
{
	//int aane dou//
	Search<int> s ;
	s.add_numbers();
	cout<<"Enter number you want to find as int  : ";
	int x ;
	cin>>x;
	s.find_in_array(x);
	
	//float jane dou//
	Search<float> s1 ;
	s1.add_numbers();
	cout<<"Enter number you want to find as float  : ";
	int f ;
	cin>>f;
	s.find_in_array(f);
}
