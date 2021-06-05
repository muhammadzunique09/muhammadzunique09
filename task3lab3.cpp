#include<iostream>
using namespace std;

class Glass{
    private:
        int level;
    public:
        void display(void){
            cout <<endl << "liquidlevel: " << level<<endl;
        };

        void refill(void){
            int x = 200 - level;
            level = x + level;     
        };

        void drink(int x){
            level = level - x;
            if((level) < 100){
                refill();
            }
        };

        Glass(){
            level = 200;
        };
};

int main(){
    Glass g;
    int y;
    while(1){
        cout << "1) Drink water or juice " << endl << "2) Exit" << endl;
        cin >> y;
        if(y == 1){
            int cons;
            cout << "Water consumed: ";
            cin >> cons;
            g.drink(cons);
            g.display();
            cout << endl;
        }
        else{
            exit(0);
        }
    }
}
