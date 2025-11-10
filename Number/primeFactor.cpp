#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    if(n==1){
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<"Prime factors of "<<n<< " is:- " <<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}