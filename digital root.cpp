#include<iostream>
using namespace std;

int sumofdig(int n){
	if(n<10)
		return n;
	else{
		return n%10 + sumofdig(n/10);
	}
}

int fun(int n){
	if(n < 10)
		return n;
	else
		fun(sumofdig(n));
}

int main(){
	int x=0;
	int n[100]={0};
	while(true){
		cin>>x;
		if(x==0)
			break;
		cout<<fun(x);
	
	}

	return 0;
} 
