#include<iostream>
using namespace std;

typedef struct Jew{
	int m;
	float arr;
	Jew(){
		p=0;
		m=0;
		arr=0.0f;
	}
}jew;


int main(){
	int v=0,n=0,p=0;
	jew *j;
	while(cin>>v && v!=0){
		cin>>n;
		j=new jew[n];
		for(int i=0;i<n;i++){
			cin>>p>>jew[i].m;
			jew[i].arr=p/jew[i].m * 1.0f;
		}
	}
	return 0;
} 
