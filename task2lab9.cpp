#include<iostream>
#include<stdlib.h>
using namespace std ;

class Shape{
	private:
		int area;
	public:
		Shape(int area)
		{
			this->area = area ;
		}
		Shape()
		{
			
		}
		Shape operator +(Shape s)
		{
			Shape temp ; 
			temp.area = area + s.area;
			return temp;
		}
		void display()
		{
			cout<<"Combined Area is : "<<area ; 
		}
	
};
int main()
{
	Shape s2(30);
	Shape s1(25);
	Shape s3 = s1 + s2 ; 
	s3.display();
}
