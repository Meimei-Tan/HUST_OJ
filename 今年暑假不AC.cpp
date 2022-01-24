#include<iostream>
using namespace std;

typedef struct Program_{
	int s;
	int e;
} Program;

void sort(Program *p,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(p[j].e > p[j+1].e){
				Program t;
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}

int main(){
	int count=0;
	Program p[100];
	while(cin>>count && count){
		for(int i=0;i<count;i++){
			cin>>p[i].s>>p[i].e;
		}
		sort(p,count);
		int canW=1;
		Program canP=p[0];
		
		for(int j=1;j<count;j++){
			if(canP.e<=p[j].s){
				canW++;
				canP=p[j];
			}
				
		} 
		cout<<canW<<endl;	
	}
	return 0;
}

