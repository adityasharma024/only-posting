#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in Array:"<<endl;
    cin>>n;
    cout<<"Enter the numbers Now:"<<endl;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
           
        }
    }
    cout<<"sorted array is:"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
   }
   return 0;
}