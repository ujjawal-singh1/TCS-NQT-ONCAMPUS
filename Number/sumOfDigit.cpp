#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp=n;
    int sum=0;
    while(temp>0){
        int d=temp%10;
        sum+=d;
        temp/=10;
    }
    cout<<"Sum of "<<n<<" is:-"<<sum<<endl;
    return 0;
}