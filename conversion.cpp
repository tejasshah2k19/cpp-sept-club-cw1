#include<iostream>

using namespace std;

class Time {
    public:
    int h;
    int m;

    operator int(){
       return (h*60)+m;
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
     int k = c; //k = c = 2.5 = 2
     cout<<endl<<"k => "<<k;
     float l=k;//2 => 2
     cout<<endl<<"l => "<<l;


     //1500 inr -> usd ->

    //type conversion
    Time t; //class type
    t.h = 5;
    t.m = 15;
    int totalMinutes = t;// basic = class -> class To basic conversion
    cout<<"\nTotalMinutes =>"<<totalMinutes;
    return 0;
}
//Los -> 9 pm
