#include<iostream>
using namespace std; 
//friend function 
class Pakistan;

class India{
    public:
        int fuel;//pakistan 
        int rocket; 

        void food(){
            cout<<endl<<"India::food()";
        }

        friend void america(India i,Pakistan p);
};

class Pakistan{
    public:
        int bullet;
        friend void america(India i,Pakistan p);
};

void america(India i,Pakistan p){
    cout<<i.fuel;
    cout<<p.bullet;
    cout<<i.rocket; 
}

int main(){
    India army;
    army.rocket = 1000;
    army.fuel = 10000; 

    India i1; 
    i1.rocket = 0;
    i1.fuel = 1000;

    Pakistan p;
    p.bullet = 200; 

    america(i1,p);

    return 0;
}