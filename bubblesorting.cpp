#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in an array:"<<endl;
    cin>>n;
    int Arr[n];
    cout<<"Enter the elements now"<<endl;
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }

    int counter=1;

    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(Arr[i]>Arr[i+1]){
                int temp=Arr[i+1];
                Arr[i+1]= Arr[i];
                Arr[i]=temp;

            }
        }

    }
    cout<<"Bubble Sorted Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<endl;
    }
    
}