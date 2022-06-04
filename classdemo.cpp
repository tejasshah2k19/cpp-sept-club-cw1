#include<iostream>

using namespace std;

//class first letter cap
// Employee  TempEmployee

class Calc{
    private:
    int a,b,c;//variable [ attributes]
    //class - instance variable
    public:
    void getData(){
        cout<<"Enter two numbers";
        cin>>a>>b;
    }
    void add(){
        c = a+b;
        cout<<"addition = "<<c;
    }

    void sub(){
        c = a-b;
        cout<<"subtraction = "<<c;
    }
    void mul(){
        c = a*b;
        cout<<"multiplication = "<<c;
    }

};

int main(){

    Calc obj;//obj is an object of Calc class
    obj.getData();
    obj.add();

    Calc obj2;//a b c
    return 0;
}
