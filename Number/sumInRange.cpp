#include<iostream>
using namespace std;


int main(){

    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    cout<<"Sum in Range b/w "<<a<<" and "<<b<<" is:-"<<sum;
    return 0;
}