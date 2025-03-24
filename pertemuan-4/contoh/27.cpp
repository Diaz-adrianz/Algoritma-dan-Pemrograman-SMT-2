// Menerima masukan nama kota dan mencetak kode pos kota ybs

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kota;

    cout << "Masukkan nama kota: ";
    cin >> kota;

    if (kota == "Padang")
        cout << "25000" << endl;
    else if (kota == "Bandung")
        cout << "40100" << endl;
    else if (kota == "Solo")
        cout << "51000" << endl;
    else if (kota == "Denpasar")
        cout << "72000" << endl;
    else if (kota == "Palu")
        cout << "92300" << endl;
    else
        cout << "Tidak ada di dalam daftar" << endl;

    return 0;
}