// Bank

// DEKLARASI
// const minSaldo: integer (10000)
// saldo, nomorMenu, transaksi: integer
// stop: boolean

// ALGORITMA
// minSaldo ← 10000
// saldo ← minSaldo
// play ← false
// while not stop do
//  write(saldo)
//  write("MENU")
//  read(nomorMenu)
//  if nomorMenu = 0 then
//      read(transaksi)
//      saldo ← saldo + transaksi
//  else if nomorMenu == 2 then
//      read(transaksi)
//      if saldo - transaksi < minTransaksi then
//          write("Saldo mencapai minimum!")
//      else
//          saldo ← saldo - transaksi
//      end if
//  end if
// end while

#include <iostream>
using namespace std;

int main()
{
    const int minSaldo = 10000;
    int saldo = minSaldo, nomorMenu, transaksi;
    bool stop = false;

    while (!stop)
    {
        cout << "\nSaldo Anda: " << saldo;
        cout << "\nMENU"
             << "\n0. Setor uang"
             << "\n1. Ambil uang"
             << "\nx. Keluar"
             << "\nMasukkan pilihan Anda: ";
        cin >> nomorMenu;

        if (nomorMenu == 0)
        {
            cout << "Masukkan jumlah uang: ";
            cin >> transaksi;

            saldo += transaksi;
        }
        else if (nomorMenu == 1)
        {
            cout << "Masukkan jumlah uang: ";
            cin >> transaksi;

            if (saldo - transaksi < minSaldo)
                cout << "Saldo Anda mencapai nilai minimum " << minSaldo << endl;
            else
                saldo -= transaksi;
        }
        else
            stop = true;
    }

    return 0;
}