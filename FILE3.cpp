#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

class File
{
	//private data 
	private: 
		char dumy[1000];
		char original[1000];
		
	//public data
	public:
		void user_input()
		{
			fflush(stdin);
			cout<<"Enter your original : ";
			gets(dumy);
		}
		
		void decryption()
		{
			fstream fout;
			fout.open("Zunique.txt",ios::out);
			for(int i = 0 ; dumy[i] != '\0' ; i++)
			{
				fout<<dumy[i];
			}
			fout.close();
			
			fout.open("Zunique.txt",ios::in);
			if(fout == "NULL")
			{
				cout<<"ERROR IN FILE MATCHING \n RECHECK FILE NAME";
				exit(0);
			}
			int x=0;
			while(!fout.eof())			
			{
				fflush(stdin);
				fout.get(original[x]);
				x++;
			}
			fout.close();
		}
		
		void encryption()
		{
			int number = 0 , counter = 0 ;
			fstream fin;
			fin.open("k200145.txt",ios::out);
			for(int i = 0 ; original[i] != '\0' ; i++)
			{
				while(( original[i] !=' ' && original[i] != '\0' ) && ( original[i] >= 48 && original[i] <= 57 ) )
				{
					number ++ ; 
					if(number >=3)
					{
						fin<<"Z";
					}
					i ++ ; 
				}
				
				if(original[i]==' ')		
				{
	        	     number = 0 ;
   					 continue ;
				}
				
				else if(original[i] == '\0')
				{
					number = 0 ;
					break ; 
				}
				
				else if(number < 3)
				{
					i -= number ;
					number = 0 ;
				}
				
				if((original[i]  >= 49 && original[i] <= 57) && !(original[i+1] >= 49 && original[i+1] <= 57))		
				{
					fin<<char(original[i] + 16);
				}
				
				else if((original[i ]>= 49 && original[i] <= 50) && (original[i+1] >= 48 && original[i+1] <= 57))		
			    {
		    	if(original[i] == 49 )			
		    	{
					fin<<char(original[i+1] + 26);
					i ++;
				}
				else if(original[i]==50)		
				{
					fin<<char(original[i+1] + 36);
					i ++; 
				}	 
				}
				
			else if( (original[i] == 48 || original[i] == 45) ||(original[i] >= 50 && original[i] <= 57 && original[i+1] >= 48 && original[i+1] <= 57) )				
			 	fin<<"Z";		
			 	if(original[i]==45 || (original[i]>=50 && original[i]<=57  && original[i+1]>=48 && original[i+1]<=57)) 			
			 	{
				for(int j = i+1; original[j] >= 49 && original[j] <= 57; j++)
				{
				counter ++;		
				}
				i += counter;		
				counter = 0;						}
			}	
				fin.close();
		}
		
};


int main()
{
	File file;
	file.user_input();
	file.decryption();
	file.encryption();

	return 0 ;
	
}
