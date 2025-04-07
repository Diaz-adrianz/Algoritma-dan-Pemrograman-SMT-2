// penjumlana deret pecahan

#include <iostream>
using namespace std;

int main()
{
    float jumlah = 0;
    int n, k = 1, tanda = 1;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    while (k <= n)
    {
        jumlah += tanda * (float)1 / n;
        k += 2;
        tanda = -tanda;
    }

    cout << "Jumlah: " << jumlah << endl;

    return 0;
}