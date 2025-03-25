// Mengurutkan tiga buah bilangan dari yang terkecil

// DEKLARASI
// a, b, c, temp: integer

// ALGORITMA
// read(a, b, c)
// if (a > b) then
//     temp ← a
//     a ← b
//     b ← temp
// endif
// if (a > c) then
//     temp ← a
//     a ← c
//     c ← temp
// endif
// if (b > c) then
//     temp ← b
//     b ← c
//     c ← temp
// endif
// write(a, b, c)

// KODE
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, temp;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << ", " << b << ", " << c << endl;

    return 0;
}