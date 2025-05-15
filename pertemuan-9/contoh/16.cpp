// maksimum

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

void cariMaks(int a[], int n, int &maks)
{
    maks = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > a[maks])
            maks = i;
}

int main()
{
    const int nmaks = 100;
    int a[nmaks], n, maks;

    cout << "Masukkan panjang array: ";
    cin >> n;

    bacaLarikVersi1(a, n);
    cetakLarik(a, n);
    cariMaks(a, n, maks);

    cout << "Maksimum: " << a[maks] << endl;

    return 0;
}