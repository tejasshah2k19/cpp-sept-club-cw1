#include<iostream>

using namespace std;

class Employee{
    char name[30];
    int salary;
    int tax;

    public:
        void getData(){
            cout<<"Enter name and salary";
            cin>>name>>salary;
        }

        void calculateTax(){
            if (salary >= 100000){
                tax = salary*0.2;
        	}
        	else if( salary >= 50000 ) {
                tax = salary * 0.1;
        	}else{
                tax = 0;
        	}
        }

        void display(){
            cout<<name<<"  "<<salary<<"   "<<tax;
        }

};


int main(){
    Employee obj;
    obj.getData();
    obj.calculateTax();
    obj.display();
    return 0;
}
