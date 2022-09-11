#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int score=n*(x/10);
        cout<<score<<endl;
    }
    return 0;
}