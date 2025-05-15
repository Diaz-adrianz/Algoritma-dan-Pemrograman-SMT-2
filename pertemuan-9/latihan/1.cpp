// Mencari nilai x

#include <iostream>
using namespace std;

void cariElemen(int a[], int n, int x, int &idxx)
{
    idxx = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            idxx = i;
}