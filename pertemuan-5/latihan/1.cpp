// Membaca jumlah karakter

// DEKLARASI
// n, i   : integer
// cc  : character

// ALGORITMA
// read(n)
// if n > 0 then
//  for i ← 1 to n do
//      read(cc)
//  end for
// else
//  while cc != '.' do
//      read(cc)
//  end while
// end if

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    char cc;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    if (n > 0)
        for (i = 1; i <= n; i++)
        {
            cout << "Masukkan karakter ke-" << i << ": ";
            cin >> cc;
        }
    else
        while (cc != '.')
        {
            cout << "Masukkan karakter ke-" << i << ": ";
            cin >> cc;
            i++;
        }

    return 0;
}