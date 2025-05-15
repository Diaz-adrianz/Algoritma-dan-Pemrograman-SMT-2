// Nilai minimum dan maksimum

#include <iostream>
using namespace std;

void cariMinMaks(int a[], int n, int &min, int &maks)
{
    min = a[0];
    maks = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > maks)
            maks = a[i];
    }
}