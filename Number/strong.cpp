#include<iostream>
using namespace std;
int facto(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int main(){
    int n;
    cin>>n;

    int temp=n;
    int ans=0;
    while(temp>0){
        int d=temp%10;
        ans+=facto(d);
        temp/=10;
    }

    if(n==ans){
        cout<<"Strong Number"<<endl;
    }
    else{
        cout<<"Not Strong Number"<<endl;
    }
    return 0;
}