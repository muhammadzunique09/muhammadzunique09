#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


typedef struct baseballplayer{
	string name;
	int homeruns=0;
	int hits=0;
	
	
};


int main()
{
	
	struct baseballplayer player[10];
	system("CLS");
	menu: 
		cout<<"\t\t\n\nMENU DRIVEN PROGRAM\n*****************\n\n";
		cout<<"[1]. ENTER INFORMATION FOR PLAYERS"<<endl<<"[2].SEARCH FOR PARTICULAR PLAYER (enter number 0-9 )"<<endl<<"[3].UPDATE INFORMATION"<<endl<<"[4].EXIT";
		cout<<endl<<endl;
	
	int choice;
	cout<<"Enter Your choice :";
	cin>>choice;
	cout<<endl<<endl;
	
	switch(choice)
	{
		case 1 :
			int i ;
			for(i=0;i<10;i++)
			{
				cout<<"Player # "<<i+1<<endl;
				cout<<"Enter player's Name :";
				cin>> player[i].name;
				cout<<"Enter number of hits :";
				cin>> player[i].hits;
				cout<<"Enter Home runs :";
				cin>> player[i].homeruns;
			}
			system("CLS");
			goto menu;
		
		
		case 2 :
			int sr;
			cout<<"Enter the Number of player you want to search :";
			cin>>sr;
			
			for(i=0;i<10;i++)
			{
				if(sr==i)
				{
					cout<<"Player Name : "<<player[i].name<<endl;
					cout<<"Number of hits :"<<player[i].hits<<endl;
					cout<<"Home runs scored :"<<player[i].homeruns<<endl;
					
				}
			}
			
			system("pasue");
			system("pasue");
			system("pasue");
			system("CLS");
			
			goto menu;
			
		case 3 :
			int up;
			cout<<"Enter the Number of player you want to update record :";
			cin>>up;
			for(i=0;i<10;i++)
			{
				if(up==i)
				{
					int ch;
					cout<<"[1].Name "<<endl<<"[2].Home Runs scored"<<endl<<"[3].Number of Hits"<<endl;
					cout<<"Enter the field you want to update :";
					cin>>ch;
					
					switch(ch)
					{
						case 1 :
							cout<<"Re-Enter Name :";
							cin>>player[i].name;
							system("CLS");	
							goto menu;
						case 2:	
							cout<<"Re-Enter Home runs scored :";
							cin>>player[i].homeruns;
							system("CLS");
							goto menu;
							
						case 3:
							cout<<"Re-Enter Hits :";
							cin>>player[i].hits;
							system("CLS");
							goto menu;
							
							
					}
					
				}
				
			}
		
		case 4:
			cout<<"THANK YOU....!";
			exit(0);	
			
	}
	
	
	
	

	
	

	

	
	return 0 ;
}
