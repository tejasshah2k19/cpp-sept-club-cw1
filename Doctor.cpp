#include<iostream>
#define S 50

using namespace std; 
class Doctor{


	char name[30];
    char specialization[30];
	public: 
	int doctorId; 
	
	Doctor(){
		doctorId = rand()%999+1; 
	}

	void getData(){
		cout<<"Enter name ";
		cin>>name;	
        cout<<"enter specialization?";
        cin>>specialization;
	}
	void printData(){
		cout<<endl<<doctorId<<"  "<<name<<"  "<<specialization;
	}
	
};  

int main(){

	Doctor d[S];//0 1 2 3 4
    Doctor tmp;
    int choice;
    int docCount=0;
    char sp[30];
    while(1){
        cout<<endl<<"0 For exit";
        cout<<endl<<"1 Add Doctor";
        cout<<endl<<"2 List Doctors";
        cout<<endl<<"3 Sort Doctors";
        cout<<endl<<"4 for search doctor";
        cout<<endl<<"enter choice";
        cin>>choice; 

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            d[docCount].getData();
            docCount++;
            break;
        case 2 :
            for(int i=0;i<docCount;i++){
                d[i].printData();
            }
        case 3:
                for(int i=0;i<docCount;i++){
                    for(int j=0;j<docCount-1;j++){
                        if(d[j].doctorId > d[j+1].doctorId){
                        tmp = d[j];
                        d[j] = d[j+1];
                        d[j+1] = tmp;     
                        }
                    }
                }    
                break;
        case 4:
            cout<<"Enter specialization?";
            cin>>sp; //spine
        default:
            cout<<endl<<"Invalid choice";
            break;
        }

        

    }

    
}
















