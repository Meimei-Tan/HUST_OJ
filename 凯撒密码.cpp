#include<iostream>
#include<string>
using namespace std;

void decode(char c){
	if(c >= 65 && c <= 90){
		c += 21;
		if(c > 90)
			c -= 26;
	}
	cout<<c;
}

int main(){
	string str;
	string strs[100] = {""};
	int k=0;
	while(true){
		cin>>str;
		if(str!="START" && str!="END"){
			if(str=="ENDOFINPUT")
				break;
			else{
				strs[k]=str;
			}
		}
	}
	
	for(int i=0;strs[i]!="";i++){
		for(int m=0;m < strs[i].length();m++)
			decode(strs[i][m]);
		cout<<endl;
	}
	
	return 0;
} 
