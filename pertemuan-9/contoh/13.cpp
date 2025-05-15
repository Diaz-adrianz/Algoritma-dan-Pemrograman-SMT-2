// Nilai maksimum versi 2 (prosedur)

#include <iostream>
using namespace std;

void cariMaks(int a[], int n, int &maks)
{
    maks = a[1];
    for (int i = 1; i < n; i++)
        if (a[i] > maks)
            maks = a[i];
}