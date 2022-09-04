#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main(){

    vector<int> v;
    int size,i,num;


    cout<<"How many numbers you want to store?";
    cin>>size;

    for(i=1;i<=size;i++){
        cout<<endl<<"enter number";
        cin>>num;

        v.push_back(num);
    }

    cout<<endl<<"Vector Data : "<<endl;

    vector<int>::iterator vi;



    /*for(auto p=v.begin();p!=v.end();p++){
        cout<<*p<<endl;
    }*/
    //find sum of all elements - vector
    //find max from vector

    //we can travel all the data of vector like an array
    for(i=0;i<v.size();i++){
        cout<<endl<<v[i];
    }
    cout<<"\n direct access : v[1] "<<v[1]; // we can access vector using index
    cout<<"\n first element using at : v.at(0) "<<v.at(0);
    cout<<"\n 0th index => front : v.front() " <<v.front();
    cout<<"\n last element => Back  : v.back() " <<v.back();

    //1 2 3 4 5
    //0th index -> 1
    //delete 0
    //0th index -> 2



    for(i=0;i<v.size();i++){
        cout<<endl<<v[i];
    }

    cout<<"\nBefore Remove : "<<v.size();
    v.clear(); //remove all elements from vector
    cout<<"\nAfter Remove : "<<v.size();

    return 0;
}


//1 2 3 5 4 9 6
//reverse
//empty()
//size()




