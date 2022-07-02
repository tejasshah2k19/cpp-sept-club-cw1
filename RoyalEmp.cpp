#include<iostream>

using namespace std;

class Employee{
    private:
        char firstName[25];
        char lastName[25];
        int salary;
    public:
        void printData();
        void getData();
};
//Employee -> public 
class PartTimeEmployee : private Employee{
    private:
        int majuri;
    //public:
        //inherit 
    public:
        void getData(){
            Employee::getData();//
            cout<<"Enter majuri";
            cin>>majuri;
        }
        void printData(){
            Employee::printData();
            cout<<"  "<<majuri;
        }
};

void Employee::getData(){
    cout<<"Enter FirstName LastName And Salary";
    cin>>firstName>>lastName>>salary;
}

void Employee::printData(){
    cout<<endl<<firstName<<"  "<<lastName<<"  "<<salary; 
}

int main(){
    // Employee e;
    // e.getData();
    // e.printData();

    PartTimeEmployee pt; 
    pt.getData();
    pt.printData();
    return 0;
}