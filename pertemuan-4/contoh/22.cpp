// Menentukan genap atau ganjil

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    switch (x % 2)
    {
    case 0:
        cout << "Genap" << endl;
        break;
    case 1:
        cout << "Ganjil" << endl;
        break;
    }

    return 0;
}