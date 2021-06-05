#include<iostream>
#include<string>
using namespace std;

class Shape
{
public:
	double volume(float b, float l, float h)
	{
		return l*b*h;
	}
	double volume(float r, float h)
	{
		return 3.142*r*r*h;
	}
	double volume(float s)
	{
		return s*s*s;
	}
};
 int main()
 {
 	Shape shape;
 	cout<<"Volume 1 : "<<shape.volume(12.3,423.1,3.3)<<" meter cube"<<endl;
 	cout<<"Volume 2 : "<<shape.volume(12.1,32.1)<<" meter cube"<<endl;
 	cout<<"Volume 3 : "<<shape.volume(12.3)<<" meter cube"<<endl;
 	
 	return 0 ;
 }

