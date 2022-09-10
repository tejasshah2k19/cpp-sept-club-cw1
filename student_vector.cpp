#include<iostream>
#include<vector>

using namespace std;
class Student{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;

public:
        void getData(){
            cout<<"enter name and marks of three subjects";
            cin>>name>>maths>>sci>>eng;

            perc = (maths+sci+eng)/3; // 100 exam
        }

        void printData(){
            cout<<endl<<name<<"\t"<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<perc;
        }

};
int main(){

    vector<Student> v;
    int i;

    Student s1;
    s1.getData();
    //s1.printData();

    Student s2;
    s2.getData();
    //s2.printData();

    v.push_back(s1);
    v.push_back(s2);

    for(i=0;i<v.size();i++){

        v.at(i).printData();
    }

    return 0;

}
