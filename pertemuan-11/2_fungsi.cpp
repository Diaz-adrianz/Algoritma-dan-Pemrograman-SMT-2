#include <iostream>
using namespace std;

void garis()
{
    cout << "--------------------" << endl;
}

void tampilkanMenu()
{
    garis();
    cout << "======= MENU =======" << endl
         << "1. Pilihan pertama" << endl
         << "1. Pilihan kedua" << endl
         << "1. Keluar" << endl;
    garis();
}

void selamatTinggal()
{
    cout << "Terima kasih sudah menggunakan program ini!" << endl;
}

int main()
{
    tampilkanMenu();
    selamatTinggal();
    garis();
    return 0;
}