#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void Bubble_Sort(int A[],int n){
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
		if (A[j]>A[j+1]){
		    swap(A[j],A[j+1]);
		}
	}
	}
}
void printArray(int A[],int size){
	for(int i=0;i<size;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int n;
	int A[n];
	cout<<"Enter the limit :";
	cin>>n;
	cout<<"Enter the elements :";
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"Unsorted Array :";
	printArray(A,n);
	Bubble_Sort(A,n);
	cout<<"Sorted Array   :";
	printArray(A,n);
	return 0;
}