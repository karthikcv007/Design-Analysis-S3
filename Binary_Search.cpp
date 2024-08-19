#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int x){
	int LB=0;
	int UB=n-1;
	while(LB<=UB){
		int mid=(LB+UB)/2;
        if(arr[mid]==x){
        	return mid;
		}		
		else if(arr[mid]>x){
			UB=mid-1;
		}
		else{
			LB=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	int A[100];
	int x;
	cout<<"Enter the limit :";
	cin>>n;
	cout<<"Enter the elements  :";
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"Enter the element to find the position :";
	cin>>x;
	int result=Binary_Search(A,n,x);
	if(result != -1){
		cout<<"Element found at"<<" "<<result<<"th position."<<endl;
	}
	else{
		cout<<"No such element found in the array.";
	}
}
