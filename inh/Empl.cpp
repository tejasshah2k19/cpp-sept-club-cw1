#include<iostream>
using namespace std;
class Empl{

    public :
    void getData(){
        cout<<"Empl";
    }
};

class PartTimeEmpl :public Empl{
    public:
    void getData(){
        cout<<"PartTimeEmpl";
    }
};

