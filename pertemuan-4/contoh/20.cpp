// Mencetak kata untuk angka 1 sampai 4

#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka == 1)
        cout << "satu" << endl;
    else if (angka == 2)
        cout << "dua" << endl;
    else if (angka == 3)
        cout << "tiga" << endl;
    else if (angka == 4)
        cout << "empat" << endl;
    else
        cout << "Angka yang dimasukkan harus 1-4" << endl;

    return 0;
}