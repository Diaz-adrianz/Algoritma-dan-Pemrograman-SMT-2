// Membalikkan elemen-elemen

#include <iostream>
using namespace std;

void reverseLarik(int *arr, int n)
{
    int kiri = 0;
    int kanan = n - 1;

    while (kiri < kanan)
    {
        int temp = arr[kiri];
        arr[kiri] = arr[kanan];
        arr[kanan] = temp;

        kiri++;
        kanan--;
    }
}