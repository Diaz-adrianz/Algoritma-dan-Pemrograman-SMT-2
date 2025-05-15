// Hitung rata-rata

#include <iostream>
using namespace std;

void hitungRataRata(int a[], int n, float u)
{
    float jumlah = 0;
    for (int i = 0; i < n; i++)
        jumlah += a[i];
    u = jumlah / n;
}