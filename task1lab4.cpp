#include<iostream>
using namespace std;

class circle{
	private:
		float radius;
	public:
		circle(float x )  //constructor
		{
			radius = x ;
			
		}

		float get_area()
		{
			return 3.14*radius*radius;
		}
		float get_per()
		{
			return radius*2*3.14;
		}
	
	
};

int main()
{
	float area , per ;
	circle c(2.5);
	area = c.get_area();
	per = c.get_per();
	
	cout<<"Area of circle is " <<area<<" sq.cm"<<endl;
	cout<<"Perimeter of circle is " <<per<<" cm"<<endl;

	return 0 ;
}
