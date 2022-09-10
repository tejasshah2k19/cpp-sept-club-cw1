#include<iostream>
#include<set>
#include<iterator>

using namespace std;


int main(){

    set<int> s; //set unique - unordered
    set<int>::iterator i;

    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(5);
    s.insert(10);
    s.insert(4);
    s.insert(-12);

    //sorted
    for(auto x:s){
        cout<<endl<<x;
    }

    cout<<endl<<"Using Iterator :- ";
    for(i=s.begin();i!=s.end();i++){
        cout<<endl<<*i;
    }


    return 0;

}
