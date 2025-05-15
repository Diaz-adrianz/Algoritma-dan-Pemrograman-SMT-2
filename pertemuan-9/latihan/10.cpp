// Mencari median (larik sudah terurut)

#include <iostream>
using namespace std;

void nilaiMedianLarikTerurut(int a[], int n, float median)
{
    if (n % 2 == 1)
        median = a[n / 2];
    else
        median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
}