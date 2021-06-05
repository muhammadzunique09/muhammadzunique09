#include<iostream>
using namespace std;

class perimeter
{
	double length;
	double breadth;
	double peri_meter;
	
	public:
		perimeter(double length,double breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		
		void cal_perimeter()
		{
			peri_meter=2*(length+breadth);
		}
		void display()
		{
			cout<<"Perimeter of Rectangle : "<<peri_meter<<endl<<endl;
		}
	
	friend class printclass;
	
};

class printclass
{
	public:
		void receive(perimeter &p)
		{
			p.cal_perimeter();
			cout<<"Perimeter of Rectangle : "<<p.peri_meter;
		}
};

int main()
{
	perimeter obj(10,20);
	obj.display();         //Before
	printclass ob;
	ob.receive(obj);
	
}
