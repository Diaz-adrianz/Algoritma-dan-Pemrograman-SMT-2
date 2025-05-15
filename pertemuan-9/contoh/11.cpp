// Nilai maksimum (prosedur)

#include <iostream>
using namespace std;

void cariMaks(int a[], int n, int &maks)
{
    maks = -9999;
    for (int i = 0; i < n; i++)
        if (a[i] > maks)
            maks = a[i];
}