// Cetak barisan

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        cout << i << ", ";
        i += 1;
    }

    return 0;
}