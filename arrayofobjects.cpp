#include<iostream>
using namespace std;
int x;//1 copy
class Batsman {
    //instance variable
	char name[34];
	int matchPlayed;
	int rank;

	public:
        int getRank(){
            return rank;
        }
		void getData(){
		    int k;//local
			cout<<"\nEnter name and matchPlayed";
			cin>>name>>matchPlayed;
		}
		void calculateRank(){
			//rank
			if(matchPlayed >= 250){
                rank = 1;
			}else if (matchPlayed >= 150 ){
                rank = 10;
			}else if(matchPlayed >= 50){
                rank = 25;
			}else{
                rank = 100;
			}
		}
		void display(){
            cout<<endl<<name<<"\t"<<matchPlayed<<"\t"<<rank;
		}

};

int main(){
	Batsman b[100],tmp;//allocate
	int n=3;
	for(int i=0;i<n;i++){
		b[i].getData(); //1 2 3 4 5 6 ... 11
		b[i].calculateRank();
    }
	cout<<endl<<"Before Sorting";
	for(int i=0;i<n;i++){
        b[i].display();
	}
	//sort
	for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(b[j].getRank() > b[j+1].getRank()){
                tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
	}

	cout<<endl<<"After Sorting";
    for(int i=0;i<n;i++){
        b[i].display();
	}


}
