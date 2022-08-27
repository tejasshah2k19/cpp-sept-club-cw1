#include<iostream>
using namespace std;
//template->generic programming
//T -> generic ->

template <class T>;


template <class T>


class A{
    public:
	void add(T a,T b){
		cout<<endl<<a+b;
	}

	void sub(T x,T y){
		cout<<endl<<x-y;
	}
	void sqr(T t){
		cout<<endl<<t*t;
	}
};


class Calc{
        T x;//template instance variable
        int k;

public:

        void add(T a,T b){ // template function argument
                cout<<endl<<a+b;
        }
       /* void add(int a,int b){
            cout<<a+b;
        }
        void add(float a,float b){
            cout<<a+b;
        }
        void add(double a,double b){
            cout<<a+b;
        }
        void add(short int a,short in b){
             cout<<a+b;
        }
        void add(long double a,long double b){
             cout<<a+b;
        }*/
        //long double
        //short int

};
int main(){
    Calc<int> obj;//T -> int
    obj.add(10,20);

    Calc<float> obj2;//T ->float
    obj2.add(20.20,30.30);

    Calc<double> obj3;
    obj3.add(12.12,12.12);

    A<int> a;
    a.sqr(12);

    A<float> b;
    a.sqr(2.5);

    return 0;
}
