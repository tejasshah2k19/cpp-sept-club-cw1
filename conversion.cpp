#include<iostream>

using namespace std;

class Time {
    public:
    int h;
    int m;

    operator int(){
       return (h*60)+m;
    }

    Time(){

    }

    Time(int totalMinutes){//125
        h=totalMinutes/60;//2
        m=totalMinutes%60;//5  //5 = totalMinutes - (h*60)
    }
};

class  INR{
    public:
        float amount;//100

};

class USD{
    public:
        float amount;
    USD(){
    }

    USD(INR i){
        amount = i.amount / 80;

    }
};

int main(){
    int a=5;
    int b=2;
    //float c = a/b;//2  int/int => int implicit   10-2=8  2-10=-8

    float c = (float)a/b; //float/int => float | explicit
     cout<<"ans=>"<<c;//2.5


    //type conversion
    //basic type
    //baisc To basic
     int k = c; //k = c = 2.5 = 2
     cout<<endl<<"k => "<<k;
     float l=k;//2 => 2
     cout<<endl<<"l => "<<l;


     //1500 inr -> usd ->

    //type conversion
    Time t; //class type
    t.h = 5;
    t.m = 15;
    int totalMinutes = t;// basic = class -> class To basic conversion -> operator
    cout<<"\nTotalMinutes =>"<<totalMinutes;


    Time t1 = 125;//125 minutes =>  basic To class -> constructor
    cout<<endl<<" H=> "<<t1.h<<" M=> "<<t1.m;


    //class to class

    INR i;
    i.amount = 1500;//1500RS

    USD u = i; //para constructor
    cout<<endl<<"INR "<<i.amount;
    cout<<endl<<"USD "<<u.amount;


    return 0;
}
//Los -> 9 pm




//basic-basic ---  no
//class-basic - operator
//basic-class -- constructor
//class-class -- constructor
