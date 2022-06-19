#include<iostream>
#include<string.h>
using namespace std;

class Person{

    private :
            char firstName[30],lastName[30],gender[7];

    public:

            void input(){
                cout<<"Enter FirstName LastName and Gender";
                cin>>firstName>>lastName>>gender;
            }

            void print(){
                cout<<endl<<firstName<<"  "<<lastName<<"  "<<gender;
            }

            void setFirstName(char *fn){
                strcpy(firstName,fn);
            }

            void setLastName(char *ln){
                strcpy(lastName,ln);
            }

            void setGender(char *gen){
                strcpy(gender,gen);
            }
            char* getFirstName(){
                return firstName;
            }

};

int main(){
    Person p[3];//p[0] p[1] p[2]
    int i;

    for(i=0;i<3;i++){
        p[i].input();
    }
    for(i=0;i<3;i++){
        p[i].print();
    }

    //1 person firstName
    p[0].setFirstName("laxman");
    p[1].setLastName("laxman");
    p[2].setGender("female");
    cout<<"\nAfter Setters\n";
    for(i=0;i<3;i++){
            p[i].print();
    }

    cout<<"\nGetters\n";
    cout<<endl<<p[0].getFirstName();

    return 0;
}








