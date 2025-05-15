// Elemen terbesar dibanding jumlah sebelumnya

#include <iostream>
using namespace std;

void elemenTerbesar(int a[], int n)
{
    int sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > sum)
            cout << a[i] << ", ";
        sum += a[i];
    }
    cout << endl;
}