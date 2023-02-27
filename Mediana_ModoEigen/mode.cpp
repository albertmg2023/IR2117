#include <iostream>
#include<Eigen/Dense>
#include <unordered_map>
#include<vector>
using namespace std;
using namespace Eigen;

double Mode( VectorXd& v){

    unordered_map<double,int> freqMap;

    for(auto x:v){

        freqMap[x]++;


    }

    double modo=0;
    int maxFreq=0;

    for(auto& pair : freqMap){

        if(pair.second>maxFreq){
            maxFrec=pair.second;
            mode=pair.first;
        }


    }

    return mode;




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





        cout<<" The mode of your vector is: "<<Mode(nums)<<endl;

        system("pause");

        return 0;



}