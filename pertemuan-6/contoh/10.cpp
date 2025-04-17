// Hitung luas segitiga dengan parameter luaran

#include <iostream>
using namespace std;

void hitungLuasSegitiga(float alas, float tinggi, float &l)
{
    l = alas * tinggi / 2;
}

int main()
{
    float a, t, l;

    cout << "Masukkan ukuran segitiga (alas, tinggi): ";
    cin >> a >> t;

    hitungLuasSegitiga(a, t, l);

    cout << "Luas: " << l << endl;
    return 0;
}