/*
	给出一串数字，返回素数个数 
*/
#include<math.h>
#include<iostream>
using namespace std;
#define MAX 2147483647
bool isPrime(int num){
	if(num <= 3)
		return num > 1;
	if(num == 5 || num == 7 )
		return true; 
	
	int mod = num % 10;
	if(mod != 1 && mod != 9 && mod != 7 & mod != 3 && num > 10)
		return false;
			
	int sqrtx = sqrt(num);
	for(int i = 2; i < sqrtx;i++){
		if(num % i == 0)
			return false;
	}
	
	return true;
	}	
int checkPrime(int numbers[],int length){
		int count = 0;
		
		for(int i = 0;i < length;i++){
			if(isPrime(numbers[i]))
				count++;
		}
		
		return count;
	} 
int main(){
	int length = 0;
	int *numbers = new int[length];
	cin>>length;
	for(int i = 0;i < length;i++){
		cin>>numbers[i];
		if(numbers[i] < 2 || numbers[i] > MAX)
			return 0;
	}
	cout<<checkPrime(numbers,length)<<endl;
	delete []numbers;
	return 0;
}

