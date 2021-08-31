#include<iostream>
#include<climits>
using namespace std;

int main(){

    
    int n;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;   //declaration of variables

    cout<<"Please enter array limit   ";
    cin>>n;            //taking input

    int arr[n];    //intialising array

    cout<<"Enter array elements   ";
    for (int i = 0; i < n; i++)
    {                                           
        cin>>arr[i];                    //taking input of array
    }

    cout<<"Your array elements are :  ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";             //printing array
    }


    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);      //finding maximum number in the array
        minNo=min(minNo,arr[i]);      //finding minimum number in the array
    }

    cout<<"\nMAX NUMBER = "<<maxNo;
    cout<<"\nMIN NUMBER = "<<minNo;      //printing




    return 0;
    







}