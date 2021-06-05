#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void get_area()=0;
		int area ;
		virtual void display()=0;
		
};
class Triangle:public Shape{
	public:

		void get_area()
		{
			cout<<"Enter Area of Triangle : ";
			cin>>area;
		}
		void display()
		{
			cout<<"AREA OF TRIANGLE IS "<<area<<" sq.cm"<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void get_area()
		{
			cout<<"Enter Area of Rectangle : ";
			cin>>area;
		}
		void display()
		{
			cout<<"AREA OF RECTANGLE IS "<<area<<" sq.cm"<<endl;
		}		
};
int main()
{
	Triangle t;
	Rectangle r ;
	t.get_area();
	r.get_area();
	t.display();
	r.display();
}
