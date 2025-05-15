// elemen minimum versi 3

#include <iostream>
using namespace std;

void cariMinimum(int a[], int n, int &idxMin)
{
    idxMin = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[idxMin])
            idxMin = i;
}