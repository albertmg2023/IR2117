#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int sum=0;
    cout<<"Enter a number a>=1: \n";
    cin>>a;
    cout<<"Enter b number b>=1: \n";
    cin>>b;
    
    for(int i=a;i<b+1;i++){


        sum+=i;



    }
    cout<<"The sum from "<<a<< " to "<<b<<" is "<<sum;

    system("pause");
    return 0;



}