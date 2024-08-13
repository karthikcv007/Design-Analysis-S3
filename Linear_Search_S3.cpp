#include<iostream>
using namespace std;
int Linear_Search(int A[],int n,int x){
	for (int i=0;i<n;i++){
		if(A[i]==x){
			cout<<"Target element found in"<<" "<<i<<"th position"<<endl;
		}
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Enter the limit :";
	cin>>n;
	int A[n];
	cout<<"Enter"<<" "<<n<<" "<<"Elements :";
	for (int i=0;i<n;i++){
		cin>>A[i];
	}
	int x;
	cout<<"Enter the element to search :";
    cin>>x;
    int r=Linear_Search(A,n,x);
    if (r==-1){
    	cout<<"No such element present in the array .";
	}
}