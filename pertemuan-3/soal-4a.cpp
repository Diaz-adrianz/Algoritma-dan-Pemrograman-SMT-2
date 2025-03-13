// Buatalah algoritma yang membaca nilai uang (rupiah) dalam kelipatan 25
// lalu memnetukan berapa nilai tukaran pecahan.

#include <iostream>
using namespace std;

int main()
{
    int inputUang, pec1000, pec500, pec100, pec50, pec25;

    cout << "Masukkan nominal uang: ";
    cin >> inputUang;

    pec1000 = inputUang / 1000;
    pec500 = inputUang % 1000 / 500;
    pec100 = inputUang % 1000 % 500 / 100;
    pec50 = inputUang % 1000 % 500 % 100 / 50;
    pec25 = inputUang % 1000 % 500 % 100 % 50 / 25;

    cout << pec1000 << " pecahan 1000" << endl;
    cout << pec500 << " pecahan 500" << endl;
    cout << pec100 << " pecahan 100" << endl;
    cout << pec50 << " pecahan 50" << endl;
    cout << pec25 << " pecahan 25" << endl;

    return 0;
}