// Geser elemen ke belakang

#include <iostream>
using namespace std;

void geserElemen(int *a, int n)
{
    int last = a[n - 1];
    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = last;
}
