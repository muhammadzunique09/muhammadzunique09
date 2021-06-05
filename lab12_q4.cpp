#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Participant{
	char name[20];
	int Id;
	long int score;
	
	public:
		Participant()
		{
			score = 0;
		}
		void input()
		{
		
				cout << "Name : ";
				cin.getline(name,20);
				cout << "ID: ";
				cin >> Id;
				cout << "Enter score: ";
				cin >> score;		
			
		}
		
	void get()
	{
		cout << "Name : " << name;
		cout << endl << "ID: "  << Id << endl;
	}
	void getscore()
	{
		cout << "Score : " << score;
		cout << endl;
	}
		void addFile()
		{
			ofstream fout;
			fout.open("participant.dat", ios::app);
			fout.write((char*)this , sizeof(*this));
			fout.close();
		}
		void search(int Id)
		{
			ifstream fin;
			fin.open("participant.dat", ios::in);
			if(!fin)
			{
				cout << "File is not exist ";
				
			}
			else
			{
				fin.read((char*)this, sizeof(*this));
				while(!fin.eof())
				{
					if(Id == this->Id)
					{
						this->get();
						this->getscore();
						break;
					}
					
					fin.read((char*)this, sizeof(*this));
				}
				
				fin.close();
			}
		}
		
		void Max()
		{
			int max = 0;
			ifstream fin;
			fin.open("participant.dat", ios::in);
			if(!fin)
			{
				cout << "File is not exist ";
				
			}
			else
			{
				fin.read((char*)this, sizeof(*this));
				max = this->score;
				
				while(!fin.eof())
				{
					if(max < this->score)
					{
						 max = this->score;
						cout << max << endl;
						if(max == this->score)
							this->get();
							break;
					}
					else
					{
						cout << max;
						if(max == this->score)
							this->get();
							break;
					}
					fin.read((char*)this, sizeof(*this));
				}
				
				fin.close();
			}
		}
		
		
		
};

int main()
{
	Participant p;
	char c;
	int n, Id;
	cout << "Enter no.of data you want to enter: ";
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		p.input();
	
		cout << "\nEnter y or Y to add on the file ";
		cin >> c;
		cin.ignore();
		if(c == 'y' || c== 'Y')
		{
			p.addFile();
		}
	}
	cout << "\n\nEnter the Id you want to search data: ";
	cin >> Id;
	
	cin.ignore();
	p.search(Id);
	
	cout << "Find the maximum scorer: ";
	p.Max();

}
