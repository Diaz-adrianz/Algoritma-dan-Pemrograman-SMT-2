// Barisan Fibonacci

// DEKLARASI
// n, i: integer
// a, b, c: integer

// ALGORITMA
// read(n)
// a ← 1
// b ← 1
// if n >= 1 then
//  write(a)
// end if
// if n >= 2 then
//  write(b)
// end if
// i ← 3
// while i <= n do
//     c ← a + b
//     write(c)
//     a ← b
//     b ← c
//     i ← i + 1
// end while

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci: ";
    cin >> n;

    int a = 1, b = 1, c, i = 1;

    if (n >= 1)
        cout << a << " ";
    if (n >= 2)
        cout << b << " ";

    i = 3;
    while (i <= n)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }

    cout << endl;
    return 0;
}
