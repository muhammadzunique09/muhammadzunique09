#include<iostream>
using namespace std;

class Add {

public:
	static int a,b;
	void take_set()
	{
		cout<<"Enter A :";
		cin>>Add::a;
		cout<<"Enter B :";
		cin>>Add::b;
	}
    static int sum() {
        return a + b;
    }

    void show()
    {
    	cout << "Sum of A and B is : " <<a+b;
	}
};
int Add :: a = 0 ;
int Add :: b = 0 ;
int main()
{
	Add p  ;
	p.take_set();
    p.sum();
    p.show();
    return 0;
}
