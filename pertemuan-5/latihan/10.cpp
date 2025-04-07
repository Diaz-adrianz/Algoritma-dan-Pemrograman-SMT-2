// Jumlah bilangan ganjil pertama

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, bilangan = 1, jumlah = 0;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    while (i <= n)
    {
        jumlah += bilangan;
        bilangan += 2;
        i++;
    }

    cout << "Jumlah: " << jumlah << endl;

    return 0;
}
