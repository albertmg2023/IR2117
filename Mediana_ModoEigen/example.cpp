#include <iostream>
#include<Eigen/Dense>

using namespace std,Eigen;

int main(){

        VectorXd v(5);
        v<<1,2,3,4,5;

        double mean=v.mean();

        cout<<" La media aritmética del vector es"<<mean;

        system("pause");

        return 0;



}
