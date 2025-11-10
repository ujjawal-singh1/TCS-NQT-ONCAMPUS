#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    cout<<"Factorial of "<<n<<" is :-"<<facto<<endl;
    return 0;
}