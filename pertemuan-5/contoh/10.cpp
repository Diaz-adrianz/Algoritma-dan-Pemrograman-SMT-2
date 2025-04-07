// Penjumlahan deret

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        sum += i;
        i += 1;
    }

    cout << "Jumlah: " << sum << endl;

    return 0;
}