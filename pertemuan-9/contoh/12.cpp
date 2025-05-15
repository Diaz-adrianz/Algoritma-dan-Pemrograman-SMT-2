// Nilai maksimum (fungsi)

#include <iostream>
using namespace std;

int cariMaks(int a[], int n)
{
    int maks = -9999;
    for (int i = 0; i < n; i++)
        if (a[i] > maks)
            maks = a[i];
    return maks;
}