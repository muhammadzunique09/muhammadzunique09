//copy one file data to other file

#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    string str;
    
    fstream iff("NO_1.txt",ios::in);
    fstream of("NO_2.txt",ios::app);
    if(!iff)
    {
    	cout<<"FILE NOT FOUND ... or ERROR IN FILE OPENING"<<endl;
	}
 
    if(iff && of){
 
        while(getline(iff,str))
		{
            of << str << "\n";
        }
 
        cout << "File Data Copied..!  \n";
 
    } else {

       cout<<"\nERROR in copying data ..reload program ...!";
    }
 
   
    iff.close();
    of.close();
    
    return 0 ;
}
