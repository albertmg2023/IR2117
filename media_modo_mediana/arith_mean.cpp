#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char** argv){
    vector<int> elements;
    double m=0 ,s=0;

    int n=0 ,element;
    cin>>element;

    while(not cin.eof()){
        elements.push_back(element);
        n+=1;
        cin>>element;

    }   
    
    for(int i=0;i<n;i++){

        s+=elements[i];

    }

    m=s/n;

    cout<<"Arithmetic mean: "<<m<<endl;


    system("pause");
    return 0;

    

}