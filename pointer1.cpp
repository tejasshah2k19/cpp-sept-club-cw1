#include<iostream>
using namespace std; 

class Student{
    public: 
        int age; 
        void printAge(){
            cout<<endl<<age;
        }

};

int main(){
 /*   int a,b,c; //value 
    int *p,*q; //address 

    p = &a; //address of a --> p
    q = &b; //address of b --> q 
    
    // & --> address 
    // * --> value 

    cout<<endl<<"Enter two numbers";
    cin>>*p>>*q; 

    c = *p + *q;
    cout<<endl<<"add = "<<c;

*/
    Student s;
    Student *p;
    p = &s; 

    //s.age = 10;
    p->age = 10; 
    s.printAge();
}