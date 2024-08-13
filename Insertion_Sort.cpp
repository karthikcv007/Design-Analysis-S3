#include<iostream>
using namespace std;
void Insertion_Sort(int A[],int n){
	for (int i=0;i<n;i++){
		int key = A[i];
		int j=i-1;
	
	while(j>=0 && A[j]>key){
		A[j+1]=A[j];
		j=j-1;
	}
	  A[j+1]=key;
	}
}
void PrintArray(int A[],int size){
	for (int i=0;i<size;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a;
	cout<<"Enter the limit :";
	cin>>a;
	int A[a];
	cout<<"Enter the elements :";
	for(int i=0;i<a;i++){
		cin>>A[i];
	}
	cout<<"Unsorted Array  :";
	PrintArray(A,a);
	Insertion_Sort(A,a);
	cout<<"Sorted Array :";
	PrintArray(A,a);
}