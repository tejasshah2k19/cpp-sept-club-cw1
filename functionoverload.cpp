#include<iostream>

using namespace std; 

class Amazon{
    public:
        void search(int a,int b){
            cout<<a+b;
        }
        void search(float x,float y){
            cout<<x+y;
        }
        // void search(int k,int l){
        //     cout<<k+l;
        // }
        // int search(int k,int l){
        //     cout<<k+l;
        //     return k+l;
        // }
        
};

 
int main()
{
     Amazon a;
     a.search(1,2);
 
    return 0;
}

