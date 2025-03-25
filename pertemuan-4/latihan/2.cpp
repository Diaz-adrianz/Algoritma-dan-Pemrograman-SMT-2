// Menentukan nilai belanja setelah dikurangi diskon

// DEKLARASI
// totalBelanja, minTotalBelanja, diskon: real

// ALGORITMA
// read(totalBelanja)
// if totalBelanja > minTotalBelanja then
//  totalBelanja ← totalBelanja - diskon
// endif
// write(totalBelanja)

// KODE
#include <iostream>
using namespace std;

int main()
{
    float totalBelanja, minTotalBelanja = 100000, diskon = 10000;

    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if (totalBelanja > minTotalBelanja)
        totalBelanja -= diskon;

    cout << "Total harus dibayar: " << totalBelanja << endl;

    return 0;
}