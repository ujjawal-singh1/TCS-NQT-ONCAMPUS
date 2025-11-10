#include<iostream>
using namespace std;

int main(){

    int n,d,a;
    cin>>n>>d>>a;
    int Sn=(n*(2*a+(n-1)*d))/2;
    cout<<"Sum of "<<n<<" Ap Series "<<Sn;
    return 0;
}