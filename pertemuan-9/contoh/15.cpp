// Nilai maksimum versi 3 (fungsi)

#include <iostream>
using namespace std;

int cariMaks(int a[], int n)
{
    int idxMaks = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > idxMaks)
            idxMaks = i;
    return idxMaks;
}