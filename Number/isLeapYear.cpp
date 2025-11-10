#include<iostream>
using namespace std;
bool isLeap(int n){
    if(n%4!=0) return false;
    if(n%100!=0) return true;
     return n%400==0;
}
int main(){
    int n;
    cin>>n;
    if(isLeap(n)){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not Leap Year"<<endl;
    }
    return 0;
}