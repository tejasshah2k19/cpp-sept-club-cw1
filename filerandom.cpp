#include<iostream>
#include<fstream>

using namespace std;

void singleSkip(){

    ifstream in;
    char x;
    in.open("D:\\Temp\\data.txt");
    while(1){
        in>>x;//ac
        if(in.eof()){
            break;
        }
        in.seekg(1,ios::cur);// char , where?
        cout<<x;
    }
    in.close();
}

void readLast5()
{


    ifstream in;
    char x;
    in.open("D:\\Temp\\data.txt");
    in.seekg(-5,ios::end);
    while(1){
        in>>x;//ac
        if(in.eof()){
            break;
        }
        cout<<x;
    }
    in.close();

}
int main(){
  //seekg -> read
   readLast5();
    return 0;
}
