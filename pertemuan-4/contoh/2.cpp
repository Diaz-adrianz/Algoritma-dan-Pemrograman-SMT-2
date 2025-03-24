// Mencetak pesan "huruf vokal" bila sebuah karakter yang dibaca merupakan huruf hidup.
// Asumsikan karakter yang dibaca adalah huruf kecil saja

#include <iostream>
using namespace std;

int main()
{
    char cc;

    cout << "Masukkan satu huruf: ";
    cin >> cc;

    if (cc == 'a' || cc == 'i' || cc == 'u' || cc == 'e' || cc == 'o')
        cout << "Huruf vokal" << endl;

    return 0;
}