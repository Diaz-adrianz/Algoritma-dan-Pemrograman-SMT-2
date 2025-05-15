// Dua elemen terbesar

#include <iostream>
using namespace std;

void duaElemenTerbesar(int a[], int n, int &maks1, int &maks2)
{
    if (a[0] > a[1])
    {
        maks1 = a[0];
        maks2 = a[1];
    }
    else
    {
        maks1 = a[1];
        maks2 = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > maks1)
        {
            maks2 = maks1;
            maks1 = a[i];
        }
        else if (a[i] > maks2 && a[i] != maks1)
            maks2 = a[i];
    }
}