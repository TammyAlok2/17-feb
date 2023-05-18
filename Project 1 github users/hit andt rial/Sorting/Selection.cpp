#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i,temp;
        for(int j=i+1;j<n;j++){
if(arr[j]<arr[minIndex]){
    minIndex =j;
}
        }
        //program for swapping int arr[i] and int arr[min indes]
temp =arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;

    }
}
int main(){

int arr[]={1,7,84,4,90,54,32,87};

printArray(arr,8);
SelectionSort(arr,8);
cout<<" \n after sorting (selection) the aray \n";
printArray(arr,8);
    return 0;
}