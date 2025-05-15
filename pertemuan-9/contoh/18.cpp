// elemen minimum versi 2

#include <iostream>
using namespace std;

void cariMinimum(int a[], int n, int &min)
{
    min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];
}