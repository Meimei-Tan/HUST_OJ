#include<iostream>
#include<string>
using namespace std;

void vcm(string str){
	for(int i=0;i<str.length();i++){
		if(str[i] <= 90 && str[i] >= 65)
			str[i]+=32;		
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			str[i]-=32;
	}
	cout<<str<<endl;
}

int main(){
	int count=0;
	string str;
	cin>>count;
	while(count--){
		cin>>str;
		vcm(str);
	}
	return 0;
} 
