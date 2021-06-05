#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class ABC{
	string s;
	int x;
	
	public:
		ABC()
		{
			x =0;
		}
		void input()
		{
			cout << "Enter the string: ";
			getline(cin, s);
			
		}
		
		int calculateLength()
		{
			for(int i = 0; s[i] != '\0'; i++)
			{
				x++;
			}
			
			return x;
		}
		void addFile()
		{
			ofstream fout;
			fout.open("file1.txt", ios::out);
			fout << s;
			fout.close();
		}
		void read()
		{
			ifstream fin;
			fin.open("file1.txt", ios::in);
			if(!fin)
			{
				cout << "File is not exist ";
				
			}
			else
			{
				getline(fin, s);
				cout << "\nHere's the content of the file." << endl;
				cout << s;
			}
		}
};

int main()
{
	ABC a;
	char c;
	a.input();
	cout << "\n\nThe length of the string: \t"<< a.calculateLength() << endl;
	cout << "\nEnter y or Y to add on the file ";
	cin >> c;
	if(c == 'y' || c== 'Y')
	{
		a.addFile();
	}
	else {
		cout << "string is not added in the file";
	}
	cout << "\n\nDo you want read the file content ?";
	cin >> c;
	if(c == 'y' || c == 'Y')
	{
		system("cls");
		a.read();
	}
}
