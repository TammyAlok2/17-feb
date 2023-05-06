#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[]={34,2,32,234,1,64,643,3};
    printArray(arr,8);
    BubbleSort(arr,8);
    cout<<" \n After Bubble sort"<<endl;
    printArray(arr,8);

}