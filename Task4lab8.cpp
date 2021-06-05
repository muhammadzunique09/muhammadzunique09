#include<iostream>
#include<string>
using namespace std;

class Multiplication
{
public:
	int multiply(int x, int y)
	{
		return x*y;
	}
	int multiply(int x, int y, int z)
	{
		return x*y*z;
	}
	double multiply(double x, double y)
	{
		return x*y;
	}
	double multiply(double x, double y, double z)
	{
		return x*y*z;
	}
};

int main()
{
	Multiplication a;
	
	cout << "Multiply of two integers: " << a.multiply(4,5) << endl;
	cout << "Multiply of two decimals: " << a.multiply(4.3,5.5) << endl;
	cout << "Multiply of three integers: " << a.multiply(4,5,7) << endl;
	cout << "Multiply of three decimals: " << a.multiply(4.4,5.6,3.4) << endl;
}
