#include<iostream>
using namespace std;




int linearSearch(int arr[], int limit, int k){

    for(int i=0;i<limit;i++){
        if(arr[i]==k){
            cout<<"\nThe location of  "<<k<<" in the array is at "<<i;
        }
    }
    cout<<"\nThe key  "<<k<<" is not present in the array.";
}



int main(){

    int limit;
    int k;

    cout<<"Please enter array limit   ";
    cin>>limit;            //taking input

    int arr[limit];    //intialising array

    cout<<"Enter array elements   ";
    for (int i = 0; i < limit; i++)
    {                                           
        cin>>arr[i];                    //taking input of array
    }

    cout<<"Enter key  ";
    cin>>k;

    cout<<linearSearch(arr,limit,k);

    return 0;



}


