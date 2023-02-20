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
    int aux,i,j;

    //ordenamiento burbuja del vector elementos

    for(int i=0;i<elements.size()-1;i++){

        for(int j=i+1 ; j<elements.size();j++){

            if(elements[i]>elements[j]){

                aux=elements[i];
                elements[i]=elements[j];
                elements[j]=aux;
            }

        }

    }
    //cuento el numero de elementos del primer elemento de elements
    i=0;
    while(elements[i]==elements[0]){
        m+=1;
    }
    

    cout<<"MODE : "<<m<<endl;


    system("pause");
    return 0;

    

}