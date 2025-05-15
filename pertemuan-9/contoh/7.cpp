// Baca isi elemen larik 3

#include <iostream>
using namespace std;

void bacaLarikVersi3(int a[], int n)
{
    int x, i = 0;

    cout << "Masukkan nilai: ";
    cin >> x;

    while (x != 9999)
    {
        i++;
        a[i] = x;
        cout << "Masukkan nilai: ";
        cin >> x;
    }
    n = i;
}