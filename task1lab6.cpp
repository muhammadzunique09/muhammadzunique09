#include<iostream>
using namespace std;

class circle{
	private:
		float radius;
	public:
		static int count ;
		circle(float x )  //constructor
		{
			radius = x ;
			count ++ ;
			
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
int circle::count=0;
int main()
{
	float area1,area2 , per ;
	circle c1(2.5),c2(3.3);
	area1 = c1.get_area();
	area2 = c2.get_area();

	
	cout<<"Area of circle is " <<area1<<" sq.cm"<<endl;
	cout<<"Area of circle is " <<area2<<" sq.cm"<<endl;
	cout<<"count is "<<circle::count<<endl;

	return 0 ;
}
