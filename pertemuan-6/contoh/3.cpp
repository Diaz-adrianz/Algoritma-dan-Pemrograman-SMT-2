// Hitung luas segitiga

#include <iostream>
using namespace std;

void hitungLuasSegitiga()
{
    float alas, tinggi, l;

    cout << "Masukkan ukuran segitiga (alas, tinggi): ";
    cin >> alas >> tinggi;

    l = alas * tinggi / 2;
    cout << "Luas: " << l << endl;
}

int main()
{
    cout << "Mulai menghitung luas segitiga..." << endl;
    hitungLuasSegitiga();
    cout << "Selesai" << endl;

    return 0;
}