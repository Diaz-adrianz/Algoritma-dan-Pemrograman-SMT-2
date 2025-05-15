// Cek kesamaan larik

#include <iostream>
using namespace std;

bool apakahSama(int a[], int b[], int n)
{
    int i = 0;
    bool sama = true;

    while (i < n && sama)
    {
        if (a[i] == b[i])
            i++;
        else
            sama = false;
    }

    return sama;
}