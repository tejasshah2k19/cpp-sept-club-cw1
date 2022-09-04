#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main()
{

    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    //we can access element of list using iterator

    list<int>::iterator i;

    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<endl;
    }

    l.reverse();
    cout<<endl<<"Reverse:\n";
    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<endl;
    }

    cout<<endl<<" front() "<<l.front();
    cout<<endl<<" back() "<<l.back();

    //take  n numbers from user and store into list
    //create duplicate copy of it
    //so we have to list
    //now reverse any list and compare both are same or not

    //enter size
    //4
    //enter num
    //1
    //enter num
    //2
    //enter num
    //3
    //enter num
    //4

    //list -> 1 2 3 4
    //copy list2-> 1 2 3 4
    //list.reverse() => 4 3 2 1
    //compare list  === list2 => same -> palindrome   :: not Same->non palindrome
    return 0;
}
