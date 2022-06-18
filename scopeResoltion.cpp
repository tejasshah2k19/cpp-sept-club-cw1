#include<iostream>

using namespace std;

class Person {
private:
    char name[30];

public:
    //inline
    inline void getData(){
            //5000 float array
        cout<<endl<<"enter name";
        cin>>name;
    }
    inline void printData(){
        cout<<endl<<name;//5000kb
    }

    int strlength();
    inline void abc();
};

    //scope ::
    int Person::strlength(){
        cout<<name;
    }

    void Person::abc(){

    }


int main(){ //main -> 500kb
    Person p;
    p.getData(); //getData() ->
    p.printData();//printData() ->

    return 0;
}

//recursion
//return
//loop
//switch




/*

    how to create inline function ?

    inline prefix
    or
    you can define your function inside class








*/

















