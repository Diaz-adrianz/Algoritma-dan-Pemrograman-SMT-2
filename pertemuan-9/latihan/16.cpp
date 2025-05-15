// Cari modus

#include <iostream>
using namespace std;

void cariModus(int a[], int n, int &modus)
{
    int freq = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
            if (a[j] == a[i])
                count++;

        if (count > freq)
        {
            freq = count;
            modus = a[i];
        }
    }
}