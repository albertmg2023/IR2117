#include<iostream>
using namespace std;

int fsum(int a ){

    int sum=0;
    
    for(int i=1;i<a+1;i++){


        sum+=i;



    }
    return sum;





}

int main(){
    int a;
    cout<<"Enter a number a>=1: \n";
    cin>>a;
    while(a<1){
        cout<<"It is not a number >=1 \n";
        cout<<"Enter a number a>=1: \n";
        cin>>a;


    }

    
    int sum=fsum(a);
    cout<<"The sum from 1  to "<<a<<" is "<<sum;

    
    

    system("pause");
    return 0;



}