#include <iostream>
#include <vector>
using namespace std;

template <class T>
vector<vector<T>> createMatrix(T content, int y, int x){
    vector<vector<T>> v1;
    vector<T> v2;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            v2.push_back(content);
        }
        v1.push_back(v2);
    }
    return(v1);
}

int main(){
    string content;
    cin >> content;
    auto matrix = createMatrix(content,2,3);
    return 0;
}
