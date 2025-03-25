// Menentukan apakah bilangan merupakan kelipatan 4

// DEKLARASI
// x : integer

// ALGORITMA
// read(x)
// if x mod 4 = 0 then
//  write ('Ya, Kelipatan 4')
// else
//  write ('Bukan kelipatan 4')
// end if

// KODE
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    if (x % 4 == 0)
        cout << "Ya, kelipatan 4" << endl;
    else
        cout << "Bukan kelipatan 4" << endl;

    return 0;
}