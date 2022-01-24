#include<iostream>
#include<string>
using namespace std;

void fun(string str){
	for(int i=0;i<str.length();i++){
		switch(str[i]){
			case ' ':cout<<"%20";
					 break;
			case '!':cout<<"%21";
					 break;			
			case '$':cout<<"%24";
					 break;
			case '%':cout<<"%25";
					 break;
			case '(':cout<<"%28";
					 break;
			case ')':cout<<"%29";
					 break;
			case '*':cout<<"%2a";
					 break;
			default: cout<<str[i];
					 break;
		}
	} 
	cout<<endl;
}

int main(){
	string str;
	while(getline(cin,str)){
		if(str=="#")
			break;
		fun(str);
	}
	return 0;
}
