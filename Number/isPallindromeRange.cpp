#include<bits/stdc++.h>
using namespace std;


bool  isPallindrome(int n){
    int temp=n;
    int r=0;
    while(temp>0){
        int d=temp%10;
        r=r*10+d;
        temp=temp/10;
    }
    return r==n;
}
int main(){
    int min,max;
    cin>>min>>max;

    for(int i=min;i<=max;i++){
        if(isPallindrome(i)){
            cout<<i<<" is Pallindrome"<<endl;
        }
    }
}