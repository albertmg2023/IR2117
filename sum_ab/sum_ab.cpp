#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cout<<"Enter a number >=1: \n";
    cin>>a;
    while(a<1){
        cout<<" a is not >=1 \n";
        cout<<"Enter a number >=1: \n";
        cin>>a;


    }
    cout<<"Enter b number >=1: \n";
    cin>>b;
    while(b<1){
        cout<<" b is not >=1 \n";
        cout<<"Enter b number >=1: \n";
        cin>>b;


    }


    int sum=0;

    for(int i=a;i<b+1;i++){

        sum+=i;

    }

    cout<<"The sum from "<<a<<" to "<<b<<" is  : "<<sum<<"\n";

system("pause");
return 0;

};