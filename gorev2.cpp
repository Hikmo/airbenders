#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    string sonuc = "";
    int arr[] = {-1,-1,-1};
    for(int i = 0; i<3; i++){
        arr[i] = x % 10;
        if((x / 10) == 0){
            break;
        }
        x /= 10;
    } 
    int birler = arr[0];
    int onlar = arr[1];
    int yuzler = arr[2];

    switch (yuzler)
    {
    case 1:
        sonuc += "yuz";
        break;
    case 2:
        sonuc += "ikiyuz";
        break;
    case 3:
        sonuc += "ucyuz";
        break;
    case 4:
        sonuc += "dortyuz";
        break;
    case 5:
        sonuc += "besyuz";
        break;
    case 6:
        sonuc += "altiyuz";
        break;
    case 7:
        sonuc += "yediyuz";
        break;
    case 8:
        sonuc += "sekizyuz";
        break;
    case 9:
        sonuc += "dokuzyuz";
        break;
    }

    switch (onlar)
    {
    case 1:
        sonuc += "on";
        break;
    case 2:
        sonuc += "yirmi";
        break;
    case 3:
        sonuc += "otuz";
        break;
    case 4:
        sonuc += "kırk";
        break;
    case 5:
        sonuc += "elli";
        break;
    case 6:
        sonuc += "altmis";
        break;
    case 7:
        sonuc += "yetmis";
        break;
    case 8:
        sonuc += "seksen";
        break;
    case 9:
        sonuc += "doksan";
        break;
    }

    switch (birler)
    {
    case 1:
        sonuc += "bir";
        break;
    case 2:
        sonuc += "iki";
        break;
    case 3:
        sonuc += "uc";
        break;
    case 4:
        sonuc += "dort";
        break;
    case 5:
        sonuc += "bes";
        break;
    case 6:
        sonuc += "alti";
        break;
    case 7:
        sonuc += "yedi";
        break;
    case 8:
        sonuc += "sekiz";
        break;
    case 9:
        sonuc += "dokuz";
        break;
    }

    cout << sonuc << endl;

    return 0;
}