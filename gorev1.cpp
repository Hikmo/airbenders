#include <iostream>
using namespace std;

#define G 9.80665
#define DIST(t) 0.5 * G * t * t

int main(){
    float t;
    cout << "t' yi giriniz : ";
    cin >> t;
    float dist = DIST(t);
    cout.precision(8);
    cout << "Alınan yol : " << dist;
    return 0;
}