#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=-1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Not Prime Number"<<endl;
    }
    else{
        cout<<"Prime Number"<<endl;
    }
}