#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if(low>=high)
    return;
    int pivot=partition(arr,low,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
}
int main(){

    int arr[5]={2,7,5,4,6};

    quicksort(arr,0,4);
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}