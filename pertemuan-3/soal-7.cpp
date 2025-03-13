// jumlah penduduk di suatu negara adalah jumlah kelahiran ditambah jumlah yang berimigrasi ke negara tersebut
// lalu dikurangi dengan jumlah kematian dan jumlah yang berimigrasi ke negara lain;

#include <iostream>
using namespace std;

int main()
{
    int total, lahir, migrasiMasuk, mati, migrasiKeluar;

    cout << "Masukkan jumlah kelahiran: ";
    cin >> lahir;

    cout << "Masukkan jumlah migrasi masuk: ";
    cin >> migrasiMasuk;

    cout << "Masukkan jumlah kematian: ";
    cin >> mati;

    cout << "Masukkan jumlah migrasi keluar: ";
    cin >> migrasiKeluar;

    total = lahir + migrasiMasuk - mati - migrasiKeluar;

    cout << "Total penduduk: " << total << " orang" << endl;

    return 0;
}