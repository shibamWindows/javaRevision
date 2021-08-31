#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    int arr2[n];

    cout<<"Enter the array elements  :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nYour original array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }

    cout<<"\nCopied array : ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;

}