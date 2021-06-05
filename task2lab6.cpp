#include<iostream>
using namespace std ;

class Demo{
	public:
		void show_message()
		{
			cout<<"This is inside show message function"<<endl<<"SHAKS LY ...!"<<endl;
		}
		void display()const
		{
			cout<<"This is inside display function"<<endl<<"SHAKS HY ...!"<<endl;
		}

};
int main()
{
	Demo d ;
	d.show_message();
	d.display();
	return 0 ;
}
