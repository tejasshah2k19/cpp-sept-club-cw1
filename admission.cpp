#include<iostream>
using namespace std;
class Student{
	char name[30];
	int m,p,c,total;
	bool eligible;//0 1 //true false

	public:
        void getData();
        void printData();
        void calcualteEligiblity();
};

    void Student::getData(){
        cout<<"Enter your name and marks of maths physics and chemistry";
        cin>>name>>m>>p>>c;
        total = m+p+c;
    }
    void Student::printData(){
        cout<<endl<<name<<"\t"<<m<<"\t"<<p<<"\t"<<c<<"\t"<<total<<"\t"<<eligible;
    }
    void Student::calcualteEligiblity(){
         if(m>=60 && p>=50 && c>=40 && total >= 200){
            eligible = true; // 1
         }else if( m+p >= 150){
            eligible = true;
         }else{
            eligible = false;
         }
    }
int main(){
    int i;
    Student s[3];
    for(i=0;i<3;i++){
        s[i].getData();
        s[i].calcualteEligiblity();
    }
    //
    for(i=0;i<3;i++){
        s[i].printData();
    }
    return 0;
}
