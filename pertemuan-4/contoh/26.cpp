// Empat persegi panjang

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nomorMenu;
    float panjang, lebar, luas, keliling, diagonal;

    cout << "MENU"
         << "\n1. Hitung luas"
         << "\n2. Hitung keliling"
         << "\n3. Hitung panjang diagonal"
         << "\n4. Keluar program";

    cout << "\nMasukkan pilihan anda: ";
    cin >> nomorMenu;

    switch (nomorMenu)
    {
    case 1:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas: " << luas << endl;
        break;
    case 2:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        keliling = (panjang * 2) * (lebar * 2);
        cout << "Keliling: " << keliling << endl;
        break;
    case 3:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        diagonal = sqrt((double)(panjang * panjang) + (double)(lebar * lebar));
        cout << "Diagonal: " << diagonal << endl;
        break;
    case 4:
        cout << "Keluar program!" << endl;
        break;
    }

    return 0;
}