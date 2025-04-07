// Jumlah karakter

#include <iostream>
using namespace std;

int main()
{
    char cc;
    int nangka = 0, nspasi = 0, nlain = 0;

    cout << "Masukkan karakter: ";
    cin >> cc;

    while (cc != '.')
    {
        if (cc == '0' || cc == '1' || cc == '2' || cc == '3' || cc == '4' || cc == '5' || cc == '6' || cc == '7' || cc == '8' || cc == '9')
            nangka++;
        else if (cc == ' ')
            nspasi++;
        else
            nlain++;

        cout << "Masukkan karakter: ";
        cin >> cc;
    }

    cout << "Banyak angka: " << nangka
         << "\nBanyak spasi: " << nspasi
         << "\nBanyak karakter lainnya: " << nlain
         << endl;

    return 0;
}