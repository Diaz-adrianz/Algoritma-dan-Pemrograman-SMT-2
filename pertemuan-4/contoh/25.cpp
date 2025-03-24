// Simulasi menu program

#include <iostream>
using namespace std;

int main()
{
    int nomorMenu;

    cout << "MENU"
         << "\n1. Baca data"
         << "\n2. Cetak data"
         << "\n3. Ubah data"
         << "\n4. Hapus data"
         << "\n5. Keluar program";

    cout << "\nMasukkan pilihan anda: ";
    cin >> nomorMenu;

    switch (nomorMenu)
    {
    case 1:
        cout << "Anda memilih menu nomor 1" << endl;
        break;
    case 2:
        cout << "Anda memilih menu nomor 2" << endl;
        break;
    case 3:
        cout << "Anda memilih menu nomor 3" << endl;
        break;
    case 4:
        cout << "Anda memilih menu nomor 4" << endl;
        break;
    case 5:
        cout << "Anda memilih menu nomor 5" << endl;
        break;
    default:
        cout << "Nomor pilihan anda salah" << endl;
        break;
    }

    return 0;
}