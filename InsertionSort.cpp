/*
	InsertionSort 
	˼·���ӵڶ���Ԫ�ؿ�ʼ�����������αȽ���������һ��Ԫ����������Ԫ�ش�С��
	�����������򽻻���������������������Ԫ�ز���������Ԫ�������С� 
*/

#include<iostream>
using namespace std;

void insertionSort(int a[],int length){
	for(int i = 1; i < length;i++){
		for(int j = i;j > 0 && a[j - 1] > a[j];j--){
			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
} 



int main(){
	int a[7] = {6,5,4,3,2,1,0};
	int length = sizeof(a)/sizeof(int);
	insertionSort(a,length);
	for(int i = 0;i < length;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}


