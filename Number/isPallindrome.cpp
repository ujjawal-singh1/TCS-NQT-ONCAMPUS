#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int r=0;
    while(temp>0){
        int d=temp%10;
        r=r*10+d;
        temp=temp/10;
    }
    if(r==n){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome"<<endl;
    }
    return 0;
}