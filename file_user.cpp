#include<iostream>
#include<fstream>

 
using namespace std; 
class User{
    public:
        char name[50];
        void getData();
        void printData();
};


void User::getData(){
    cout<<endl<<"Enter name";
    cin>>name;
}

void User::printData(){
    cout<<endl<<"Name => "<<name;
}
/*
int main(){
    User u;
    u.getData();
    u.printData();
    return 0;
}*/


int main(){
    char name[89];
    ofstream o;
    o.open("E:\\Tejas Shah\\c++\\21 club sept cw1 sat 2 sun 3\\name.txt");
    cout<<"enter name";
    cin>>name;

    o<<name;// << write     location<<data    cout<<"hi";  o<<"hi"; 
    o.close();
    return 0;

    
}



