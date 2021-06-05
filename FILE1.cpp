#include<iostream>
#include<fstream>
using namespace std ; 

//write and read in/from a file
class Lmao{
	string str;
	public:
		void input_and_store_to_file()
		{
			cout<<"Enter the text you want to enter in a file : ";
			getline(cin,str);
			fstream fout;
			fout.open("NO_1.txt",ios::app);
			fout<<"\n"<<str;
			cout<<endl<<endl<<"The string you entered in file is : "<<str<<endl;
			fout.close();
		}
		void read_from_file()
		{
			fstream fin;
			fin.open("NO_1.txt",ios::in);
			if(!fin)
			{
				cout<<"FILE NOT FOUND ... or ERROR IN FILE OPENING"<<endl;
			}
			else
			{
				cout<<endl<<endl<<"THE TEXT READ FROM FILE IS : ";
				char text;
				
			//why NOT use this method while reading ...???
			//1) chala k dekhlo pta chl jayega.
			//2) reads last character twice which is a bug.				
			
//				while(!fin.eof())
//				{
//					fin.get(text);
//					cout<<text;
//				}

				while(fin.get(text))
				{
					cout<<text;
				}
			}
			fin.close();
		}
		
		void caller()
		{
			input_and_store_to_file();
			read_from_file() ;
		}
	
};

int main()
{
	Lmao xd ; 
	
	xd.caller();

	return 0 ;
}

