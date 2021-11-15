#include <iostream>
using namespace std;

struct Country;

struct Province{
    string name;
    Country *domain;
};

struct Country{
    string name;
    Province *capital;
};

int main(){
    Province ankara;
    Province istanbul;
    Country tr;
    ankara.name = "Ankara";
    ankara.domain = &tr;
    istanbul.name = "Istanbul";
    istanbul.domain = &tr;
    tr.name = "Turkiye";
    tr.capital = &ankara;
    cout << istanbul.domain->capital->name << endl;

    return 0;
}