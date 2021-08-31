#include<iostream>
using namespace std;

int main(){

    int n;
    int m;

    cout<<"Enter n and m";
    cin>>n;
    cin>>m;

    int arr[n][m];

    cout<<"Enter array elements  ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"YOUR ARRAY IS\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}