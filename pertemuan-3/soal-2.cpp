// sebuah proyek dikerjakan selama X hari.
// Tulislah algoritma untuk mengkonversi berapa tahun, bulan, dan hari proyek tersebut dikerjakan

// read(totalHari)
// tahun ← totalHari / 365
// bulan ← totalHari mod 365 / 30
// hari ← totalHari mod 365  mod 30

// write(tahun, bulan, hari)

#include <iostream>
using namespace std;

int main()
{
    int inputHari, tahun, bulan, hari;

    cout << "Masukkan total hari: ";
    cin >> inputHari;

    tahun = inputHari / 365;
    bulan = inputHari % 365 / 30;
    hari = inputHari % 365 % 30;

    cout << tahun << " tahun, ";
    cout << bulan << " bulan, ";
    cout << hari << " hari" << endl;

    return 0;
}