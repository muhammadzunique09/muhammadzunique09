#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    string str;
    ifstream iff("first.txt");
    ofstream of ("Second.txt");
 
    if(iff && of){
 
        while(getline(iff,str)){
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
