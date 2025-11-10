#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int arr[5]={2,7,5,4,6};

    for(int i=1;i<5;i++){
        int current=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=current;
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}