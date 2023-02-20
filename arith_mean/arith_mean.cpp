#include<iostream>
using namespace std;
int main(int argc,char** argv){

    double m=0 ,s=0;

    int n=argc-1 ,element;
    cin>>element;
    
    while(element>0){
    while(!cin.eof()){
        n+=1;
        s+=element;
        cin>>element;

    }   
    }

    m=s/n;

    cout<<"Arithmetic mean: "<<m<<endl;


    system("pause");
    return 0;

    

}