// Simpangan baku

#include <iostream>
#include <cmath>
using namespace std;

void hitungSimpanganBaku(int data[], int n, double &simpangan)
{
    double jumlah = 0, selisih = 0, rerata;
    for (int i = 0; i < n; i++)
        jumlah += data[i];

    rerata = jumlah / (n - 1);

    selisih = 0;
    for (int i = 0; i < n; i++)
        selisih += pow(data[i] - rerata, 2);

    simpangan = sqrt(selisih / n);
}