#include<iostream>
#include<string>					
#include<vector>
#include<sstream> 
#define MAXSIZE 9
using namespace std;

//·Ö¸î×Ö·û´® 
vector<string> split(string str, char c) {
	vector<string> strs;
	int i = 0, j = 0;
	char strx[MAXSIZE];	
	for (int m = 0; m < MAXSIZE; m++)
					strx[m] = ' ';
	while (i < str.length()) { 	
		while (true) {
			
			if (str[j + i] == c && strx[0] != ' ') {
				strs.push_back(strx);
				for (int m = 0; m < MAXSIZE; m++)
					strx[m] = ' ';
				i = i + j + 1;
				j = 0;
				break;
			}
			else if ((str[j + i] == c && strx[0] == ' ')) {
				i++;
				break;
			}
			else {
				strx[j] = str[j + i];
				j++;
			}
		}
	}
	return strs;
}

//×Ö·û´®×ªÕûÊý
void stoi(vector<string> strs,int *n) {
	for (int i = 0; i < strs.size(); i++) {
	
		int a;
		stringstream ss;
		ss << strs.at(i);
		ss >> a;
		*(n + i) = a;
		ss.clear();
	}
}


//ÅÅÐò (Ã°ÅÝ)
void sort(int *numbers,int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(numbers[j] > numbers[j+1]){
				int temp;
				temp = numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=temp;
			}
		}
	} 
}

int main() {
	vector<string> strs;
	char str[1000];
	cin>>str;
	strs = split(str, '5');
	int *numbers;
	numbers = new int[strs.size()];
	stoi(strs,numbers);
	sort(numbers,strs.size());
	for (int i = 0; i < strs.size(); i++) {
		cout << numbers[i]<<" ";
	}
	delete[] numbers;
	return 0;
}

