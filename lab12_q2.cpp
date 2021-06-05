#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class ABC{
	string s;
	
	public:
		ABC()
		{
		}
		void input()
		{
			cout << "Enter the string: ";
			getline(cin, s);
			
		}
		
		void addFile()
		{
			ofstream fout;
			fout.open("file1.txt", ios::out);
			fout << s;
			fout.close();
		}
		ABC(ABC &a)
		{
			s = a.s;

		}
		void copyinFile()
		{
			ofstream fout;
			fout.open("file2.txt", ios::out);
			fout << s;
			fout.close();
		}
		void read()
		{
			ifstream fin;
			fin.open("file2.txt", ios::in);
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
	ABC a,b;
	char c;
	a.input();
	cout << "\nEnter y or Y to add on the file ";
	cin >> c;
	if(c == 'y' || c== 'Y')
	{
		a.addFile();
	}
	else {
		cout << "string is not added in the file";
	}
	cout << "\n\nDo you want copy the file content to another file?";
	cin >> c;
	if(c == 'y' || c == 'Y')
	{
		system("cls");
		b = a;
		b.copyinFile();
		b.read();
	}
}
