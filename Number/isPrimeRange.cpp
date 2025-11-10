#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int min,max;
    cin>>min>>max;

    for(int i=min;i<=max;i++){
        if(isPrime(i)){
            cout<<i<<" is Prime"<<endl;
        }
    }
    return 0;
}