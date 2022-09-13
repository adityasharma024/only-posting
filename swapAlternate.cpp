#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={2,5,7,4,7,3,8,0};
    int odd[5]={5,7,8,2,1};
    swapalternate(even,8);
    printArray(even,8);

    swapalternate(odd,5);
    printArray(odd,5);
}