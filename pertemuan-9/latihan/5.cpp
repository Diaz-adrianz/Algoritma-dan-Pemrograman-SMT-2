// Mengganti elemen-elemen dua larik

#include <iostream>
using namespace std;

void swapElemen(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}