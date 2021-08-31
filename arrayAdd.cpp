#include<iostream>
using namespace std;

int main(){


    int n;
    int sum=0;
    cout<<"Please enter the size.  ";
    cin>>n;

    int arr[n];

    cout<<"Please enter the array elements  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array elements are  :   ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<<"\n THE SUM OF ALL THE ARRAY ELEMENTS IS  :  "<<sum;

    return 0;

}