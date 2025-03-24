// Menentukan bilangan terbesar dari tiga buah bilangan bulat

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, maks;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    if (a > b)
        maks = a;
    else
        maks = b;

    if (c > maks)
        maks = c;

    cout << "Bilangan terbesar: " << maks << endl;

    return 0;
}