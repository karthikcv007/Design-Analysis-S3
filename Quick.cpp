
#include <iostream>
using namespace std;



int Partition(int low,int high,int Arr[]){
    int pivot=Arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if (Arr[j]<pivot){
            i++;
            int temp=Arr[i];
            Arr[i]=Arr[j];
            Arr[j]=temp;
            //swap(Arr[i],Arr[j]);    
        }
    }
    int t2=Arr[i+1];
    Arr[i+1]=Arr[high];
    Arr[high]=t2;
//swap(Arr[i+1],Arr[high]);

    return (i+1);
}

void QuickSort(int low,int high,int Arr[]){
    if(low<high){
        int flag=Partition(low,high,Arr);
        QuickSort(low,flag-1,Arr);
        QuickSort(flag+1,high,Arr);
    }


}
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
    int arr[10];
    cout<<"Enter limit :";
    cin>>n;
    cout<<"Enter elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];        ;
    }
    QuickSort(0,n-1,arr);
    cout<<"Sorted Array  :";
    printArray(arr,n);
    return 0;
}