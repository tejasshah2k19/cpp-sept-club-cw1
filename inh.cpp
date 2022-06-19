#include<iostream>

using namespace std;

class Computer{
    private :
        int ram;

    public:
        void getDataForComputer();
        void printData();

};
//
void Computer::getDataForComputer(){
    cout<<"Enter ram cap";
    cin>>ram;
}
void Computer::printData(){
    cout<<ram;
}

class Laptop:public Computer{
    private:
        int ssd;

    public:
        void getData();
        void printData();
} ;
//

void Laptop::getData(){
    cout<<"Enter SSD cap";
    cin>>ssd;
}
void Laptop::printData(){
    cout<<ssd;
}






int main(){

    //Computer c;
    //c.getData();
    //c.printData();

    Laptop l;
    l.getData();
    l.printData();
    l.getDataForComputer();//computer
    return 0;
}
