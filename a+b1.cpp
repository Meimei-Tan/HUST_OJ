#include<iostream>
using namespace std;

int main(){
	int scount=0,lcount=0;
	cin>>scount;
	if(scount > 50 || scount<1)
		return 0;
	int *k;
	k = new int[scount];
	
	while(true){
		cin>>k[0];
		if(k[0]>100 || k[0]<1)
			break;
		lcount++;
		int sum=k[0],arr=0,sumx=0;
		for(int i=1;i<scount;i++){
			cin>>k[i];
			if(k[i] > 100 || k[i] < 1)
				return 0;
			sum+=k[i];
		}
		arr=sum/scount;
		for(int i=0;i<scount;i++){
			if(k[i] > arr)
				sumx+=(k[i]-arr);
		}
		cout<<"Set #"<<lcount<<endl<<"The minimum number of moves is "<<sumx<<"."<<endl<<endl;
	}
	delete [] k;
	return 0;
}




