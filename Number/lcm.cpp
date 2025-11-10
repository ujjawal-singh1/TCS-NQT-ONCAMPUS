#include<iostream>
using namespace std;

int hcf(int a,int b){
    int hcf1=1;
    for(int i=2;i<=a||i<=b;i++){
        if(a%i==0&&b%i==0){
            hcf1=i;
        }
    }
return hcf1;
}
int main(){

    int a,b;

    cin>>a>>b;
    
    cout<<"LCM of two number"<<a<<" and "<<b<<" is "<<(a*b)/hcf(a,b);
    return 0;
}