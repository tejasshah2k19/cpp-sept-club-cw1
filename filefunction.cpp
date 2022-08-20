#include<iostream>
#include<fstream>

using namespace std;


int main(){

    ofstream out;

    /*
    out.open("D:\\Temp\\data.txt",ios::app);//append mode
                                            //ios::out -> overwrite | newfile
    out<<"royal"<<endl;
    out.close();
    */

    ifstream in;
    char name[30],x;
    in.open("D:\\Temp\\data.txt");

    in>>name;
    cout<<name<<endl;
    in>>name;
    in>>name;
    cout<<name<<endl;
     in>>x;
     cout<<x<<endl;//r
     in>>x;
     cout<<x<<endl;//o

    in.close();

    return 0;
}
