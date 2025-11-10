#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int temp[high-low+1];
    int k=0;

    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }

    while(j<=high){
        temp[k++]=arr[j++];
    }


    for(int u=0;u<k;u++){
        arr[low+u]=temp[u];
    }

}
void mergesort(int arr[],int low,int high){
    if(low>=high)
    return ;

    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){

    int arr[5]={2,7,5,4,6};

    mergesort(arr,0,4);
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}