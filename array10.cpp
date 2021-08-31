#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter array size  ";
    cin>>n;
    int flag=0;
    int c=0;
    int c1;

    int arr[n];

    cout<<"Enter array elements  ";
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

    for(int i=0;i<n;i++){
        if(arr[i]==1 || arr[i]==0){
            c=c+1;
            break;
        }
       
    }

    if(c>0){
        cout<<"Yes the array has 1 or 0";
    }
    else{
        cout<<"No the array has no 1 or 0";
    }

    return 0;
    
}