// penjumlahan deret pecahan

#include <iostream>
using namespace std;

int main()
{
    float jumlah = 0;
    int n, i = 1, k = 1;

    cout << "Masukkan banyak pecahan: ";
    cin >> n;

    while (k <= n)
    {
        if (i % 2 == 1)
            jumlah += (float)1 / k;
        else
            jumlah -= (float)1 / k;

        i += 1;
        k += 2;
    }

    cout << "Jumlah: " << jumlah << endl;

    return 0;
}