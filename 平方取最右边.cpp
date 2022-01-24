#include<iostream>
using namespace std;

int getRightest(int number){
	return number%10;
}

int getZ(int number){
	return number%4+4;
} 

int powx(int number,int n){
	int result=1;
	for(int i=0;i<n;i++){
		result=result*number;
	}
	return result;
}

int main(){
	int count=0,number=0;
	cin>>count;
	int *result;
	result = new int[count];
	for(int i=0;i<count;i++){
		cin>>number;
		int r = getRightest(number);
		result[i] = getRightest(powx(r,getZ(number)));
	}
	
	for(int i=0;i<count;i++)
		cout<<result[i]<<endl;
		
	delete [] result;
	return 0;
}
