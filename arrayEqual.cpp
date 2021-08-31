#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter array size  ";
    cin>>n;

    int flag=0;

    int arr1[n];
    int arr2[n];

    cout<<"Enter the first array  ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the second array  ";
     for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        cout<<"THE ARRAYS ARE SAME";

    }
    else{
        cout<<"THE ARRAYS ARE NOT SAME";
    }

    return 0;
}