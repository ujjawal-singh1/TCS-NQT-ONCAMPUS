#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int a,r,n;
    cin>>a>>r>>n;

    int Sgn=(a*(pow(r,n)-1))/(r-1);
    cout<<"Sum of "<<n<<" term of GP series is:- "<<Sgn;
    return 0;
}