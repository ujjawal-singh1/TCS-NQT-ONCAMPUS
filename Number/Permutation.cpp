#include<iostream>
using namespace std;

int factorial(int n){
   int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int main(){

    int a,b;

    cin>>a>>b;
    
    cout<<"Permutations in which "<<a<<" people can occupy "<<b<<" seats "<<factorial(a)/factorial(a-b);
    return 0;
}