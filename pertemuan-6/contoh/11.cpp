// Hitung rata-rata

#include <iostream>
using namespace std;

void hitungRataRata(int n, float &u)
{
    int x, k, j = 0;

    for (k = 0; k < n; k++)
    {
        cout << "Masukkan nilai: ";
        cin >> x;
        j += x;
    }

    u = j / n;
}