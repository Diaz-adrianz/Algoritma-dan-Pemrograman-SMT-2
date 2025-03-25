// Pesan berat badan ideal

// DEKLARASI
// tinggi, berat, beratIdeal, temp: real

// ALGORITMA
// read(tinggi, berat)
// temp ← tinggi - 100
// beratIdeal ← temp - (temp * 10 / 100)
// write(beratIdeal)
// if beratIdeal - berat <= 2 and beratIdeal - berat >= -2 then
//  write('ideal')
// else
//  write('tidak ideal')
// end if

// KODE
#include <iostream>
using namespace std;

int main()
{
    float tinggi, berat, beratIdeal;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    float temp = tinggi - 100;
    beratIdeal = temp - (temp * 10 / 100);

    cout << "berat badan ideal: " << beratIdeal << " kg" << endl;
    if ((beratIdeal - berat) <= 2 && (beratIdeal - berat) >= -2)
        cout << "Status: ideal" << endl;
    else
        cout << "Status: tidak ideal" << endl;

    return 0;
}