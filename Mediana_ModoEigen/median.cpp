#include <iostream>
#include<Eigen/Dense>
#include<vector>

using namespace std,Eigen;

double Mediana(VectorXd& v){

    vector<double> vec(v.data(),v.dada()+v.size());
    sort(vec.begin(),vec.end());

    if(v.size()%2==0){

        return (vec[v.size()/2-1] + vec[v.size()/2])/2;
    }
    else{
        return vec[v.size()/2];
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
