#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int count=0;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    int ans=0;
    temp=n;
    while(temp>0){
        int d=temp%10;
        ans+=pow(d,count);
        temp=temp/10;
    }
    if(ans==n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not A Armstrong Number"<<endl;
    }

    return 0;
}