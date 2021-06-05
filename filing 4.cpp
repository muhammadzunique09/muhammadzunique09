#include<iostream>
#include<fstream>
using namespace std ;

class Participant{
	private:
		int id , score ;
		string name ;
	public:
		void input()
		{
			cout<<"Enter name , id and score : ";
			cin >> name >> id >> score;
		}
		
		void display()
		{
			cout<<"NAME : "<<name<<endl;
			cout<<"ID : "<<id <<endl;
			cout<<"Score : "<<score<<endl;
		}
		void output()
		{
			
			int n ;
			cout<<"Enter id of the person you want to search : ";
			cin>>n;
			for(int i=0;i<2;i++)
			{
				if(p.id[i] == n )
			{
				display();
			}
			else
			{
				cout<<"NO such ID FOUND ";
			}
			}

			
		}
		
	
};

int main()
{
	Participant p[10];
	ofstream of("fact.txt");
	for(int i=0;i<2;i++)
	{
			p[i].input();
			
			of<<endl<<&p[i];	
	}
	p.output();

//	
	of.close();
	
	
	
	return 0 ;
}

