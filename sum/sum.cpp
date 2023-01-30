#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<n+1;i++){


        sum+=i;



    }
    cout<<"The sum from 1 to "<<n<<" is "<<sum;

    system("pause");
    return 0;



}