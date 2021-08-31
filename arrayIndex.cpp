#include<iostream>
using namespace std;

int main(){

    int k;
    int flag=0;
    int indn;
    int n;
    cout<<"Enter the size of the array  ";
    cin>>n;
    
    int arr[n];

    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

     cout<<"\nYour array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    cout<<"\nEnter key  ";
    cin>>k;

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag=1;
            indn=i;
        }
        
    }

    if(flag==1){
        cout<<"\nThe index number is  "<<indn;
    }
    else{
        cout<<"\nNot present";
    }

    return 0;


}