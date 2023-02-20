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
    int cant=0;
    m=elements[0];
    int maxcant=0;
    int actual;
    int anterior=elements[0];
    for(int i=0;i<elements.size();i++){
        actual=elements[i];
        if(actual==anterior){

            cant+=1;


        }
        //cuando el numero es diferente al anterior
        else{
            if(cant>maxcant){
                maxcant=cant;
                m=elements[i];
            }
            cant=0;
        }



    }
    //el bucle anterior de deja por comprobar si el ultimo número se repite mas que el anterior mas repetido

    if(cant>maxcant){
        m=elements[elements.size()-1];
    }
    
    

    cout<<"MODE : "<<m<<endl;


    system("pause");
    return 0;

    

}