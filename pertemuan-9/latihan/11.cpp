// APakah semua elemn sama

#include <iostream>
using namespace std;

void semuaElemenSama(int a[], int n, bool &sama)
{
    sama = true;
    for (int i = 0; i < n; i++)
        if (a[i] != a[0])
            sama = false;
}
