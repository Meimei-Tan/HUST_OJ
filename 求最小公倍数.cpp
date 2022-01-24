#include<iostream>
using namespace std;

int zfun(int a,int b){
	int c=0; 
	
	if(a%b==0)
		return b;
	else{
			c=a%b;
			c>b?a=c:a=b,b=c;
			return zfun(a,b);
	}
}

int main(){
	int a=0,b=0;
	while(cin>>a>>b){
		int x=0,y=0,z=0;
		x=zfun(a,b);
		y=a/x;
		z=b/x;
		cout<<x*y*z<<endl;
	}
	return 0;
}

