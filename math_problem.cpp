#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a,b,c;
    cout<<"dame el coeficiente a";
    cin>>a;
    cout<<"dame el coeficiente b";
    cin>>b;
    cout<<"dame el coeficiente c";
    cin>>c;
    int sol1=0;
    int sol2=0;
    double discrim=(b*b -4*a*c);
    if(discrim >= 0){
        sol1=-b+(sqrt(b*2 -4*a*c))/(2*a);
        sol2=b+(sqrt(b*2 -4*a*c))/(2*a);


    }
    cout<<"la solucion 1 es : "<<sol1;
    cout<<"la solucion 2 es : "<<sol2;
    

    

    
       



    

    








    system("pause");
    return 0;
}