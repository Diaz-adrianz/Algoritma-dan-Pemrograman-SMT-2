// Kategori umur

// DEKLARASI
// umur: integer

// ALGORITMA
// read(umur)
// if umur > 60 then
//  write("Tua")
// else if umur > 20 then
//  write("Dewasa")
// else if umur > 12 then
//  write("Remaja")
// else if umur > 5 then
//  write("Anak-anak")
// else
//  write("Balita")
// end if

// KODE
#include <iostream>
using namespace std;

int main()
{
    int umur;

    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur > 60)
        cout << "Tua" << endl;
    else if (umur > 20)
        cout << "Dewasa" << endl;
    else if (umur > 12)
        cout << "Remaja" << endl;
    else if (umur > 5)
        cout << "Anak-anak" << endl;
    else
        cout << "Balita" << endl;

    return 0;
}