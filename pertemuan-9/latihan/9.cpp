// Elemen-elemen sebelum elemen terkecil

#include <iostream>
using namespace std;

void tampilkanSebelumElemenTerkecil(int a[], int n)
{
    int idxMin = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[idxMin])
            idxMin = i;

    cout << "Elemen: ";
    for (int i = 0; i < idxMin; i++)
        cout << a[i] << ', ';
    cout << endl;
}