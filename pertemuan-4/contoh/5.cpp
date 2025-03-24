// Menentukan bilangan terbesar dari dua buah bilangan bulat

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    if (a > b)
        cout << "Bilangan terbesar (pertama): " << a << endl;
    else
        cout << "Bilangan terbesar (kedua): " << b << endl;

    return 0;
}