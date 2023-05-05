#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int j;
void InsertionSort(int *arr,int n){
    for(int i=1;i<=n-1;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;

        }
        arr[j+1]=key;
    }
}


int main(){
int n;
int arr[]={1,2,50,40,8,9,5};
printArray(arr,6);
InsertionSort(arr,6);
cout<<"\nafter insertion sort"<<endl;
printArray(arr,6);
    return 0;
}