// Baca isi elemen larik 2

#include <iostream>
using namespace std;

void bacaLarikVersi2(int a[], int n)
{
    char jawab;
    int i = 0;

    do
    {
        i++;
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> a[i];
        cout << "Lagi baca data larik? (y/t) ";
        cin >> jawab;
    } while (jawab != 't');
}