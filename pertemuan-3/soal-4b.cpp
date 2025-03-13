// seekor semut menempuh perjalanan sejauh x cm.
// Tulislah algoritma untuk mengonversi jarak x ke dalam km, m, cm.

#include <iostream>
using namespace std;

int main()
{
    int xcm, km, m, cm;

    cout << "Masukkan total jarak tempuh semut (cm): ";
    cin >> xcm;

    km = xcm / 100000;
    m = xcm % 100000 / 100;
    cm = xcm % 100000 % 100;

    cout << "Hasil konversi: ";
    cout << km << " km, " << m << " m, " << cm << " cm" << endl;

    return 0;
}