#include<iostream>
using namespace std;


int main(){

    int a;
    cout<<"Enter your amaount :  ";
    cin>>a;

    if(a>=5000){
       if(a>=10000){
           cout<<"Roadtrip with Neha.";
       } else{
           cout<<"Shopiing with Neha";
       }

   } else if (a>=2000){
       cout<<"Rashmi";
   } else{
       cout<<"Friends";
   }



    return 0;
}