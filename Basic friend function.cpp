//basic friend function example

#include<iostream>
using namespace std;

class B ;
void add(class A, class B);

class A{
	int x ;
	public:
		void set_X()
		{
			cout<<"Enter value of X : ";
			cin>>x;
		}
		friend void add(A , B );
		
};

class B{
	int y ;
	public:
		void set_Y()
		{
			cout<<"Enter value of Y : ";
			cin>>y;
		}
		friend void add(A , B );
		
};

void add(A a , B b)
{
	cout<<"The sum of X and Y is : "<< a.x + b.y <<endl;
}

int main()
{
	A a;
	B b ;
	a.set_X();
	b.set_Y();
	add(a,b);
	return 0 ;
}
