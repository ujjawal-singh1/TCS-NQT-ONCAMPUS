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
        temp/=10;
    }
    cout<<"Reverse of Number "<<n<<" is:- "<<r<<endl;

    return 0;
}