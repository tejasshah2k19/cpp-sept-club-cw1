#include<iostream>
#include<queue>

using namespace std;


int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(120);
    q.push(220);
    q.push(30);

/*
    cout<<endl<<q.front();//10
    q.pop();
    cout<<endl<<q.front();//20
*/

    while(!q.empty()){
        cout<<endl<<q.front();
        q.pop();
    }

    return 0;

}
