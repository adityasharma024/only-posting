#include<iostream>
using namespace std;
int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    int r;
    cout<<"enter the values of n and r\n"<<endl;
    cin>>n>>r;
    int ans=fact(n)/((fact(n-r))*fact(r));
    cout<<ans<<endl;
}