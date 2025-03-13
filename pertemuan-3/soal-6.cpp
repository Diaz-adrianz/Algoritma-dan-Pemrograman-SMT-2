// berat badan ideal ada hubungannya dengan tinggi badan
// untuk menentukan berat ideat, tinggi badang dikurangi 100
// lalu kurangi lagi dengan 10% dari hasil pengurangan

#include <iostream>
using namespace std;

int main()
{
    float tinggiCm, beratKg;

    cout << "Masukkan tinggi badan cm: ";
    cin >> tinggiCm;

    float temp = tinggiCm - 100;
    beratKg = temp - (temp * 10 / 100);

    cout << "berat badan ideal: " << beratKg << " kg" << endl;

    return 0;
}