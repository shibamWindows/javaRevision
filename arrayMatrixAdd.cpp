#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter n amd m  ";
    cin>>n>>m;

    int arr[n][m];
    int arr2[n][m];
    int arr3[n][m];

    cout<<"Enter 1st array elements \n  ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter 2nd array elements \n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            arr3[i][j]=arr[i][j]+arr2[i][j];

        }

    }

    cout<<"The added array is \n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}