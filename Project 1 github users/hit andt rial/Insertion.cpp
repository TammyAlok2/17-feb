#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int key,j,i;
void InsertionSort(int *arr,int n){
    for(int i=1;i<=n-1;i++)
    {
        key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=key;}

}

int main()
{
    int arr[]={21,52,23,56,754,54};

printArray(arr,6);
InsertionSort(arr,6);
cout<<"After insertion sort"<<endl;
printArray(arr,6);

    
    return 0;
}