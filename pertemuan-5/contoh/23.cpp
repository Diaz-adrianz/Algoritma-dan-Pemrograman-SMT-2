// Simulasi menu

#include <iostream>
using namespace std;

int main()
{
    int nomorMenu;
    bool stop = false;

    while (!stop)
    {
        cout << "MENU"
             << "\n1. Baca data"
             << "\n2. Cetak data"
             << "\n3. Ubah data"
             << "\n4. Hapus data"
             << "\n5. Keluar program"
             << "\nMasukkan pilihan Anda: ";
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
            cout << "Keluar program" << endl;
            stop = true;
            break;
        default:
            cout << "Nomor pilihan Anda salah!" << endl;
        }
    }

    return 0;
}