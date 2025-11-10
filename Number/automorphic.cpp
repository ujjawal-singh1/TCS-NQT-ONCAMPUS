#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=n*n;

    string a=to_string(ans);
    string b=to_string(n);
    int u=b.length();
    int v=a.length();
    if(a.substr(v-u,v)==b){
        cout<<"Automorphic"<<endl;
    }
    else{
        cout<<"Not Automorphic"<<endl;
    }
}