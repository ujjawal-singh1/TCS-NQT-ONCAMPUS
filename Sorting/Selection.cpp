#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int arr[5]={2,7,5,4,6};

    for(int i=0;i<5-1;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}