#include<iostream>
#include<fstream>
using namespace  std;


int main(){

    int i;
    char name[30];
    ofstream fout;
    fout.open("D:\\Temp\\names.txt");
    for(i=1;i<=3;i++){
        cout<<"Enter name";
        cin>>name;
        fout<<name<<endl;
    }
    fout.close();

    ifstream fin;
    fin.open("D:\\Temp\\names.txt");
    cout<<endl<<"content of names.txt\n";
    while(fin.getline(name,30)){
        cout<<name<<endl;
    }
    fin.close();
    return 0;
}