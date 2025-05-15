// Nilai jangkauan

#include <iostream>
using namespace std;

int nilaiJangkauan(int a[], int n)
{
    return a[n - 1] - a[0]; // sudah terurut
}