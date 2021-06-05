#include<iostream>
#include<fstream>
using namespace std;
class abc{
	string str;

	public:
		abc()
		{

		}
		
		void input()
		{
			cout << "Enter the string: ";
			getline(cin,str);
			
		}
		void addfile()
		{
			ofstream fout;
			fout.open("STORY.txt", ios::app);
			fout << str;
			fout.close();
			cout << endl;
		}
		int count1()
		{
			int count = 0;
			ifstream fin;
			fin.open("STORY.txt", ios::in);
			if(!fin)
			{
				cout << "file is not exist ";
				
			}
			else
			{
			}
				while(fin >> str)
				{
					
					for(int i = 0; i < str[i] != '\0'; i++)
					{
						if(str[0] == 'A' || str[0]== 'a')
						{
							count++;
						}
					}
				}
				fin.close();
			
			}
			return count;
		}

};

int main()
{
	abc a;
	int n;
	cout << "Enter no.of lines you want to add : ";
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		a.input();
		a.addfile();
	}
	cout <<	a.count1();

	
}
