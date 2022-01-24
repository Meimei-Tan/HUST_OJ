#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool judgesex(long long id_17){
	return (id_17/10)%2;
}

long long getid_17(string &id){
	id[17]='0';
	long long idx;
	stringstream ss;
	ss<<id;
	ss>>idx;
	return idx;
}

int main(){
	int count=0;
	string id;
	enum sex_set{
		shota=1,loli=0
	};
	cin>>count;
	sex_set *sexs;
	sexs = new sex_set[count];
	
	for(int i=0;i<count;i++){
		cin>>id;
		long long idx = getid_17(id);
		if(judgesex(idx))
			sexs[i]=shota;
		else
			sexs[i]=loli; 
	} 
	
	
	for(int i=0;i<count;i++){
		switch(sexs[i]){
			case shota:cout<<"shota"<<endl;
						break;
			case loli: cout<<"loli"<<endl;
						break;
			default:
						break; 
		}
	}
	
	delete [] sexs;
	return 0;
}
