#include <iostream>
#define _USE_MATH_DEFINES // M_PI
#include <cmath>
using namespace std;

class RegularPolygon{
    private:
        int n;
        double angle;
        static int count;

    public:
        double area(double length){
            return n * length * length * (1/tan(M_PI / n)) / 4;
        }
        double length(double area){
            return sqrt(area * tan(M_PI / n) * 4 / n);
        }
        void increaseCount(){
            count++;
        }
        void decreaseCount(){
            count--;
        }
        static int getCount(){
            return count;
        }
    RegularPolygon(int sides){
        n = sides;
        angle = M_PI * 2 / n;
        increaseCount();
    }
    ~RegularPolygon(){
        decreaseCount();
    }

};
int RegularPolygon::count = 0;
int main(){
    RegularPolygon square(4);
    RegularPolygon *tri = new RegularPolygon(3);
    cout << square.getCount() << endl;
    delete tri;
    cout << square.getCount() << endl;
    cout << square.area(3) << endl;
    cout << square.length(36) << endl;
    return 0;
}