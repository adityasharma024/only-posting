#include<iostream>
#include<conio.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    
    while(s<=e){
        int mid=(s+e)/2;
         
        if(arr[mid]==key){

            return mid;


        }

        else if(arr[mid]>key){

            e=mid-1;

        }
        else {
            e=mid+1;
        }



    

        
        


    }


    return -1;
   
}
int main(){
    int n;
    cout<<"Enter the number of elements of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched in given array:"<<endl;
    cin>>key;
    
    cout<<"The position of element in array is:"<<" "<<binarySearch(arr,n,key)<<endl;
    getch();
    return 0;


}