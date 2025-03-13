// Dibaca durasi waktu dalam detik. Tulislah algoritma untuk mengkonvversi
// durasi waktu tersebut ke dalam hari jam, menit, detik.

// read(inputDetik)
// jam ← inputDetik / 3600
// menit ← inputDetik mod 3600 / 60
// detik ← inputDetik mod 60

// write(jam, menit, detik)

#include <iostream>
using namespace std;

int main()
{
    int inputDetik, jam, menit, detik;

    cout << "Masukkan detik: ";
    cin >> inputDetik;

    jam = inputDetik / 3600;
    menit = inputDetik % 3600 / 60;
    detik = inputDetik % 60;

    cout << jam << " jam, ";
    cout << menit << " menit, ";
    cout << detik << " detik" << endl;

    return 0;
}