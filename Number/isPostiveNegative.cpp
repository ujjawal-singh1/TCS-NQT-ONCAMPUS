#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"Number is Zero"<<endl;
    }
    else if(n>0){
        cout<<"Positive Number"<<endl;
    }
    else{
        cout<<"Negative Number"<<endl;
    }
    return 0;
}