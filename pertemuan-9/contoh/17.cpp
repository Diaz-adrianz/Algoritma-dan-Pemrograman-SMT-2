// elemen minimum versi 1

#include <iostream>
using namespace std;

void cariMinimum(int a[], int n, int &min)
{
    min = 9999;
    for (int i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
}