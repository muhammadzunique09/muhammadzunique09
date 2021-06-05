#include<iostream>
using namespace std;

class count{
	private:
		int object;
		static int object_count;
	public:
		count()
		{
			++object_count;
		}
		~count()
		{
			
		}
		static void display_count()
		{
			cout<<"OBJECT COUNT IS " <<object_count;
		}
	
	
	
};
int count:: object_count;
int main()
{
	count c1;
	count c2;
	count c3;
	count::display_count();
	count c4;
	count c5;
	cout<<endl;
	count::display_count();
	return 0 ;
}
