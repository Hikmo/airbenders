#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    int line = atoi(argv[2]);
    float coefficient = atoi(argv[1]);
    vector<vector<float > > matrix;
    for(int i = 0; i < line; i++){
       vector<float> v1;
       int sizeOfLine = (argc-3) / line;
       for(int j = 0; j < sizeOfLine; j++){
           v1.push_back(atoi(argv[sizeOfLine * i + j + 3]));
       }
       matrix.push_back(v1);
    }
    
    string lineStr = "";
    for(float x : matrix[0]){
        lineStr += to_string(x * coefficient) + " ";
    }
    cout << lineStr << endl;

    return 0;
}