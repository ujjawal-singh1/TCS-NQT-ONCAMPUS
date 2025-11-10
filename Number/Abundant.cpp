#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"Abundant Number"<<endl;
    }
    else{
        cout<<"Not Abundant Number"<<endl;
    }
    return 0;
}