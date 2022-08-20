#include<iostream>
#include<fstream>

using namespace std;


int main(){

    ifstream in;
    char name[30],x;
    in.open("D:\\Temp\\data.txt");

    in.getline(name,30);//
    cout<<name<<endl;
    cout<<in.tellg();
    in.getline(name,3);//
    cout<<name<<endl;


    in.close();

    return 0;
}
