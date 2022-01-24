/*
	整数转二进制。 

*/

#include<iostream>
#define MAXSIZE 16
using namespace std;


int main(){
	int number = 0;
	int a[MAXSIZE] = {0};
	cin>>number;
	
	int i = 1;
	while(number != 0){
		a[MAXSIZE - i] = number % 2;	
		number = number / 2;
		i++;
	}
	
	for(int i = 0; i < MAXSIZE;i++)
		cout<<a[i];
	cout<<endl; 
	return 0;
}

