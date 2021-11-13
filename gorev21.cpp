#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double mean(vector<double> v1){
    double sum = 0;
    for(int i = 0; i < v1.size(); i++){
        sum += v1[i];
    }
    return sum / v1.size();
}

double sd(vector<double> v1){
    double vectorMean = mean(v1);
    double sum = 0;
    for(int i = 0; i < v1.size(); i++){
        sum += (v1[i] - vectorMean) * (v1[i] - vectorMean);
    }
    return sqrt(sum / (v1.size()-1));
}

int main(){
    vector<double> v1 = {1.2,3.0,11.2,22.1,3.5};
    return 0;
}