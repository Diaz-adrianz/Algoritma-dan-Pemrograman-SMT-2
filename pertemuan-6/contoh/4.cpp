// Hitung luas segitiga dengan prosedur dan looping

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
    int i, n;
    cout << "Mulai menghitung luas N buah segitiga" << endl;
    cout << "Mau berapa kali? ";
    cin >> n;

    for (i = 0; i < n; i++)
        hitungLuasSegitiga();

    cout << "Selesai" << endl;
    return 0;
}