#include<iostream>
using namespace std;

class Calc{
	private:
		int n1,n2,ans;

	public:
		Calc(){
			n1=0;n2=0;ans=0; //default value - using constructor
		}

		void getData(){
			cout<<"Enter two numbers";
			cin>>n1>>n2;
		}
		void add(){
			ans = n1+n2;
			cout<<endl<<"addition = "<<ans;
		}
		void sub(){
			ans = n1-n2;
			cout<<endl<<"sub = "<<ans;
		}

};


int main(){

	int ch;
	Calc obj;

	while(1){
	cout<<"\n0 for exit\n1 For Add\n2 For sub\nEnter choice";
	cin>>ch;

	    switch(ch){
		case 0: exit(0);
		case 1:
			obj.getData(); obj.add();break;
		case 2:
			obj.getData(); obj.sub();break;
		default :
			cout<<endl<<"invalid choice TA";
	    }
	}
    return 0;
}
