// Menentukan bilangan terbesar dari tiga buah bilangan bulat

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    if (a > b && a > c)
        cout << "Bilangan terbesar (pertama): " << a << endl;
    else
    {
        if (b > a && b > c)
            cout << "Bilangan terbesar (kedua): " << b << endl;
        else
            cout << "Bilangan terbesar (ketiga): " << c << endl;
    }

    return 0;
}