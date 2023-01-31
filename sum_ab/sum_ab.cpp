#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cout<<"Enter a number >=1: ";
    cin>>a;
    cout<<"Enter b number >=1: ";
    cin>>b;

    int sum=0;

    for(int i=a;i<b+1;i++){

        sum+=i;

    }

    cout<<"The sum from "<<a<<" to "<<b<<" is  : "<<sum;

system("pause");
return 0;

};