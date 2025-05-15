// Nilai maksimum versi 2 (fungsi)

#include <iostream>
using namespace std;

int cariMaks(int a[], int n)
{
    int maks = a[1];
    for (int i = 1; i < n; i++)
        if (a[i] > maks)
            maks = a[i];
    return maks;
}