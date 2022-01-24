/*
	InsertionSort 
	思路：从第二个元素开始从右至左依次比较已排序后第一个元素与已排序元素大小，
	不符合条件则交换，符合则保留，将待插入元素插入已排序元素数组中。 
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


