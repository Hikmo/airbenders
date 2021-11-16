#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){

    ifstream inFile;
    inFile.open("b.txt");

    if(inFile.fail()){
        cerr << "Error opening file" << endl;
        exit(1);
    }

    int item;
    int count = 0;
    vector<int> v1;
    vector<vector<int>> matrix;

    while(!inFile.eof()){
        inFile >> item;
        v1.push_back(item);
        count ++;
    }
    inFile.close();
    inFile.open("A.txt");
    int i = 0;
    for(int i = 0; i < count; i++){
        vector<int> v2;
        for(int j = 0; j < count; j++){
            inFile >> item;
            v2.push_back(item);
        }
        matrix.push_back(v2);
    }

    for(int item : v1){
        cout << item << endl;
    }

    for(int i = 0; i < count; i ++){
        for(int j=0; j < count; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
