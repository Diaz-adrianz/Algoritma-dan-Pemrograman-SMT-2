// Hitung luas segitiga

#include <iostream>
using namespace std;

int main()
{
    float alas, tinggi, l;

    cout << "Masukkan ukuran segitiga (alas, tinggi): ";
    cin >> alas >> tinggi;

    l = alas * tinggi / 2;
    cout << "Luas: " << l << endl;

    return 0;
}