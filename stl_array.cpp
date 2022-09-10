#include<iostream>
#include<array>
using namespace std;

//array  --> static memory --> replace
//->array class

void add(array<int> x ){
    x.size();
}

void sub(int a[],int size){

}

int main(){

    int a[5];
    int i;
    array<int,3> arr = {1,2,3};

    /*
    for(i=0;i<5;i++){
        cout<<"\nEnter number" ;
        cin>>a[i];
    }
    */
    cout<<"\nElements in Array :- \n";
    for(i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nElements in Array :- \n";
    for(i=0;i<3;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl<<"first => "<<arr.front();
    cout<<endl<<"last => "<<arr.back();
    add(arr);//3
    add(a); //5

    return 0;

}
