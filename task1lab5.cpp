#include<iostream>
using namespace std;

class Pair {

public:
	int a,b;
	void set()
	{
		cout<<"Enter A :";
		cin>>a;
		cout<<"Enter B :";
		cin>>b;
	}
    int addition() {
        return a + b;
    }
    void show()
    {
    	cout << "Sum of A and B is : " <<a+b;
	}
};

int main() {
	Pair p  ;
	p.set();
    p.addition();
    p.show();
    return 0;
}
