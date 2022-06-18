#include<iostream>
#include<string.h>
using namespace std;


class Bowler{

private:
    char name[30];
    int bowlings;
    int rank;

public:
    Bowler(){
        //constructor --- no argument -- default constructor
        rank = 0;
        bowlings = 0;
        strcpy(name,"");
    }

    Bowler(int b){
        bowlings = b;
    }


    void getData(){
        cout<<"Enter name and total Bowlings";
        cin>>name>>bowlings;
        calculateRank();
    }

    void calculateRank()
    {
        if(bowlings > 100){
            rank=1;
        }else if(bowlings >50){
            rank = 50;
        }else if(bowlings >= 1 ){
            rank = 100;
        }else{
            rank = 0;
        }
    }

    void display(){
        cout<<name<<"\t"<<bowlings<<"\t"<<rank;
    }
    //accessors
    //getters
    char* getName(){
        return name;//
    }
    int getRank(){
        return rank;
    }
    //setters
    void setRank(int x){
        rank = x;
    }
};

int main(){

    Bowler b;
    /*
    b.getData();
    b.display();
    cout<<endl<<"name = "<<b.getName();
    b.setRank(1212);
    cout<<endl<<"rank ="<<b.getRank();
    */

    b.display();
    return 0;

}
