// Cek prima

// DEKLARASI
// n, i: integer
// prima: boolean

// ALGORITMA
// read(n)
// if n <= 1 then
//  prima ← false
// else
//  prima ← true
//  i ← 2
//  while i * i <= n and prima do
//      if n mod i = 0 then
//          prima ← false
//      end if
//      i ← i + 1
//  end while
// end if
// if prima then
//  write("Bilangan prima")
// else
//  write("Bukan bilangan prima")
// end if

#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    bool prima = true;

    cout << "Masukkan bilangan: ";
    cin >> n;

    if (n <= 1)
        prima = false;
    else
        while (i * i <= n && prima)
        {
            if (n % i == 0)
                prima = false;
            i++;
        }

    if (prima)
        cout << "Ya, Bilangan prima" << endl;
    else
        cout << "Bukan bilangan prima" << endl;

    return 0;
}
