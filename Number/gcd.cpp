#include<iostream>
using namespace std;

int main(){

    int a,b;

    cin>>a>>b;
    int hcf=1;
    for(int i=2;i<=a||i<=b;i++){
        if(a%i==0&&b%i==0){
            hcf=i;
        }
    }
    cout<<"Hcf of two number"<<a<<" and "<<b<<" is "<<hcf;
    return 0;
}