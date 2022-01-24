	#include<iostream>
	using namespace std;
	
	void sort(int* array,int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(array[j]>array[j+1]){
					int temp;
					temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
			}
		}
	}
	
	int main(){
		int count=0,countN=0;
		int* array;
		cin>>count;
		while(count--){
			while(cin>>countN){
			array=new int[countN];
			for(int i=0;i<countN;i++)
				cin>>array[i];
			sort(array,countN);
			for(int j=0;j<countN-1;j++)
				cout<<array[j]<<" ";
			cout<<array[countN-1]<<endl;
			delete [] array;
		}
		} 
		
		
		return 0;
	}

