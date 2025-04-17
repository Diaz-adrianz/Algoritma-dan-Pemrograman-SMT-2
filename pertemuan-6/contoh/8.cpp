// Empat persegi panjang

#include <iostream>
#include <cmath>
using namespace std;

void hitungPersegiPanjang(int pil)
{
    float p, l, L, K, D;

    cout << "Masukkan ukuran persegi panjang (panjang, lebar): ";
    cin >> p >> l;

    switch (pil)
    {
    case 1:
        L = p * l;
        cout << "Luas: " << L << endl;
        break;
    case 2:
        K = (2 * p) + (2 * l);
        cout << "Keliling: " << K << endl;
        break;
    case 3:
        D = sqrt(p * p + l * l);
        cout << "Diagonal: " << D << endl;
        break;
    case 4:
        cout << "Keluar program" << endl;
        break;
    }
}

int main()
{
    int no;

    cout << "Menu Empat persegi Panjang"
         << "\n1. Hitung luas"
         << "\n2. Hitung keliling"
         << "\n3. Hitung panjang diagonal"
         << "\n4. Keluar program"
         << "\nMasukkan pilihan: ";
    cin >> no;

    hitungPersegiPanjang(no);
    return 0;
}