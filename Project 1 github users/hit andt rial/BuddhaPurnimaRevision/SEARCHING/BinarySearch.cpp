#include <iostream>
using namespace std;

int BinarySearch(int *arr,int size ,int element){
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
while(low<=high){
    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]>element){
        high=mid-1;
    }
    else {
        low=mid+1;
    }
}
return -1;
}
int main()
{

    int arr[]={1,2,3,5,6,7,8};
    int found = BinarySearch(arr,7,8);
    cout<<"the element found in index "<<found;
    return 0;

}