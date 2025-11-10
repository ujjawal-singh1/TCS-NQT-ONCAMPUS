#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int mini=min(a,b);
    int maxi=max(a,b);
    cout<<"Minimum b/w "<<a<<" and "<<b<<" is :-"<<mini<<endl;
    cout<<"Maximum b/w "<<a<<" and "<<b<<" is :-"<<maxi<<endl;
    return 0;
}