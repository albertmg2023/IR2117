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
    
    
    if(elements.size()%2==0){
        cout<<"hay numero par de elementos "<<endl;
        m=(1/2)*(elements[elements.size()/2]+elements[(elements.size()/2)+1]);
        cout<<"La mediana es:  "<<m;

    }
    else{
        cout<<"hay numero impar de elementos";
        m=elements[((elements.size()/2)+1)/2];
        cout<<"La mediana es:  "<<m;


    }


    system("pause");
    return 0;

    

}