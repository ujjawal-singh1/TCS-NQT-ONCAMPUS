#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
     if(n>=0&&n<=1){
        cout<<"Fibonaci of "<<n<<" is "<<n<<endl;
    }
    else
    cout<<"Fibonaci of "<<n<<" is :-"<<c<<endl;
    return 0;
}