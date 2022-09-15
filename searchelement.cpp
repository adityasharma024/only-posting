#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[5]={5,6,1,2,3};
    int n=5;
    int key;
    cin>>key;
    cout<<"the posiyion of element is  "<<search(arr,n,key)<<endl;;
}