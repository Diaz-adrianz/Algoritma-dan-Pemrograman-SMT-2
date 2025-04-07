// Penjumlahan deret

#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    do
    {
        sum += i;
        i += 1;
    } while (i <= n);

    cout << "Jumlah: " << sum << endl;

    return 0;
}