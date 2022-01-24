#include<iostream>
using namespace std;

int main(){
	int scount=0,h[50]={0};
	
	int x=0;
	while(true){
		cin>>scount;
		if(scount==0)
			break;
		int sum=0,arr=0;
		for(int i=0;i<scount;i++){
			cin>>h[i];
			sum+=h[i];
		}
		arr=sum/scount;
		sum=0;
		for(int i=0;i<scount;i++){
			if(h[i]>arr)
				sum+=(h[i]-arr);
		}
		x++;
		cout<<"Set #"<<x<<endl<<"The minimum number of moves is "<<sum<<"."<<endl<<endl;
	} 
	return 0;
}
