#include<iostream>
using namespace std;

class student{
	private:
		int score[5];
		int sc_karen[5];
		
	public:
		student()
		{
			
		}
		~student()
		{
		
		}
		void set_score(int score[5])
		{
			for(int i=0;i<5;i++)
			{
				this->score[i]=score[i];
			}				
		}
		void set_karen(int sc_karen[5])
		{
			for(int i=0;i<5;i++)
			{
				this->sc_karen[i]=sc_karen[i];
			}
		}
		void input_karen()
		{
			int karen[5];
			cout<<"Enter the scores for Karen :";
			for(int i=0;i<5;i++)
			{
				cin>>karen[i];
			}
			for(int i=0;i<5;i++)
			{
				set_karen(karen);
			}
		}
		
		int get_karen()
		{
			int sum1=0;
			for(int i=0;i<5;i++)
			{
				sum1 += sc_karen[i];
			}
			return sum1;
			
		}
		int cal_total_score()
		{
			int sum=0;
			for(int i=0;i<5;i++)
			{
				sum += score[i];
			}
			return sum;
		}
		void input()
		{
			
			int sc[5] ;
			cout<<"Enter the scores : "<<endl;

				cout<<"Student "<<endl;
				for(int i=0;i<5;i++)
				{
					cin>>sc[i];	
				}
				for(int i=0;i<5;i++)
				{
					set_score(sc);	
				}	
		}		
};

int main()
{
	int n ;
	int count=0;
	cout<<"Enter the number of students of class :";
	cin>>n;
	student karen;
	karen.input_karen();
	int kar = karen.get_karen();
	student st[n];
	cout<<"For Rest of class :"<<endl;
	for(int i=0;i<n-1;i++)
	{
		st[i].input();
	}
	for(int i=0;i<n;i++)
	{
		if ((st[i].cal_total_score()) > kar)
		{
			count++;
		}
	}
	cout<<"Number of students who have more score than Karen are :"<<count;
	return 0 ;
}
