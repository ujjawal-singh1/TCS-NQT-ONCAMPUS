#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int arr[5]={2,7,5,4,6};

    for(int i=0;i<5;i++){
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}