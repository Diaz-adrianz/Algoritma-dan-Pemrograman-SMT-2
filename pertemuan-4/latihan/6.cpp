// Membulatkan total belanja ke terendah;

// DEKLARASI
// totalBelanja, pecahanTerkecil: real

// ALGORITMA
// read(totalBelanja)
// if totalBelanja mod pecahanTerkecil != 0 then
//  totalBelanja ← totalBelanja - totalBelanja / pecahanTerkecil
// end if
// write(totalBelanja)

// KODE
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float totalBelanja, pecahanTerkecil = 25;

    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if (fmod(totalBelanja, pecahanTerkecil) != 0)
        totalBelanja -= fmod(totalBelanja, pecahanTerkecil);

    cout << "Total belanja (dibulatkan): " << totalBelanja << endl;
    return 0;
}