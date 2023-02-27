#include <iostream>
#include<Eigen/Dense>
#include <algorithm>

using namespace std,Eigen;

double Mediana(VectorXd& v){


    int n=v.size();

    sort(v.data(),v.data()+n, [](double a,double b){ return a<b;});

    

    if(n%2==0){

        return (v(n/2-1) + v(n/2))/2;
    }
    else{
        return vec(n/2);
    }






}

int main(){
        int n;
        cout<<"dame el tamaño de tu vector";
        cin>>n;
        double num;
        vector<double> nums;

        for(int i=0;i<n;i++){
            cin>>num;
            nums.push_back(num);

        }





        cout<<" La mediana del vector es"<<Mediana(nums)<<endl;

        system("pause");

        return 0;



}
