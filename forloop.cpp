#include<iostream>
using namespace std;


int main(){


    int n;
    cout<<"Enter a number";
    cin>>n;
    int sum=0;

    for(int c=1;c<=n;c++){
        sum=sum+c;
    }

    cout<<"The sum of numbers from 1 to "<<n<<" is "<<sum<<endl;





    return 0;

}