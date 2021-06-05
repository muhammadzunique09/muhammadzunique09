#include<iostream>
using namespace std;

class B ;
void add(class A &, class B & );

class A{
	int x ;
	public:
		void set_X()
		{
			cout<<"\nEnter value of X : ";
			cin>>x;
			cout<<"Value Before swapping of X is : "<<x;
		}
		friend void change(A &, B & );
		
};

class B{
	int y ;
	public:
		void set_Y()
		{
			cout<<"\nEnter value of Y : ";
			cin>>y;
			cout<<"Value Before swapping of Y is : "<<y;
		}
		friend void change(A & , B &);
		
};

void change(A & a , B & b)
{
	int temp ;
	temp = a.x;
	a.x = b.y;
	b.y = temp ;
	cout<<"\n\n\nAfter swapping : "<<endl<<"X = "<<a.x<<"\tY = "<<b.y;
}

int main()
{
	A a ;
	B b ;
	a.set_X();
	b.set_Y();
	change(a , b);
	
	return 0 ;
}
