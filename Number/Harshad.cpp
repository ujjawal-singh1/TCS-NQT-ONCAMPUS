#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int sum=0;
    
    int temp=n;
    while(temp>0){
        int d=temp%10;
        sum+=d;
        temp/=10;
    }
    if(n%sum==0){
        cout<<"Harshad Number"<<endl;
    }
    else{
        cout<<"Not Harshad Number"<<endl;
    }
    return 0;
}