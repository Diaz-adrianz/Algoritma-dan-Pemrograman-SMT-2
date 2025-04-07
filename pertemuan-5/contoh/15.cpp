// Cetak barisan

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    do
    {
        cout << i << endl;
        i++;
    } while (i < n);

    return 0;
}