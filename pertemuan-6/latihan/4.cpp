// Hitung tabungan

#include <iostream>
#include <cmath>
using namespace std;

void hitungTabungan(float a, float i, int n, float &f)
{
    f = a * pow(1 + i / 100, n);
}

int main()
{
    float a, i, f;
    int n;

    cout << "Masukkan nominal (tabungan awal, persentase bunga): ";
    cin >> a >> i;

    cout << "Masukkan tahun proyeksi: ";
    cin >> n;

    hitungTabungan(a, i, n, f);
    cout << "Total tabungan: " << f << endl;
    return 0;
}