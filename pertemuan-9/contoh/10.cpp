// Rerata

#include <iostream>
using namespace std;

void bacaLarikVersi1(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> a[i];
    }
}

void cetakLarik(int a[], int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << ", ";
    cout << endl;
}

void hitungRataRata(int a[], int n, float &u)
{
    float jumlah = 0;
    for (int i = 0; i < n; i++)
        jumlah += a[i];
    u = jumlah / n;
}

int main()
{
    const int nmaks = 100;
    int a[nmaks], n;
    float u;

    cout << "Masukkan panjang array: ";
    cin >> n;

    bacaLarikVersi1(a, n);
    cetakLarik(a, n);
    hitungRataRata(a, n, u);

    cout << "Rerata: " << u << endl;

    return 0;
}