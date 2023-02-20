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
    
    //vector de numeros  diferentes de elements 
    vector<int>diferentes;

    //vector de cantidades de diferentes

    vector<int>cants;

    //cantidad del numero actual
    int cant=0;
    int actual=elements[0];
    int anterior=elements[0];

    diferentes.push_back(anterior);

    for(int k=0;k<elements.size();k++){

        actual=elements[i];
        if(actual!=anterior){

            cants.push_back(cant);
            diferentes.push_back(anterior);
            cant=0;
        }
        else{

            cant+=1;


        }
        anterior=actual;

    }


    
    
    cout<<"Median : "<<m<<endl;

    if(diferentes.size()%2==0){
        cout<<"hay numero par de elementos diferentes";

    }
    else{
         cout<<"hay numero impar de elementos diferentes";

    }


    system("pause");
    return 0;

    

}