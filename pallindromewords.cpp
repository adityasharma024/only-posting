#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of characters in an array"<<endl;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
        

    }
    if(check==true){
        cout<<"Given word is pallindrome"<<endl;

    }
    else{
        if(check==false){
            cout<<"given word is not pallindrome"<<endl;
        }
    }
    // cout<<"given word is not true"<<endl;
}