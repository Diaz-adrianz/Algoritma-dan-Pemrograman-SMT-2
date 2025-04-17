// Hitung luas segitiga dengan parameter

#include <iostream>
using namespace std;

void hitungLuasSegitiga(float alas, float tinggi)
{
    float l;

    l = alas * tinggi / 2;
    cout << "Luas: " << l << endl;
}

int main()
{
    float a, t;

    cout << "Masukkan ukuran segitiga (alas, tinggi): ";
    cin >> a >> t;

    hitungLuasSegitiga(a, t);

    cout << "Selesai" << endl;
    return 0;
}