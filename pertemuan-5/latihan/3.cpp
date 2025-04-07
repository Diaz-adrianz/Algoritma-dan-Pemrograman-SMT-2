// Menghitung jumlah ganjil

// DEKLARASI
// n, sum, i: integer

// ALGORITMA
// read(n)
// sum ← 0
// for i ← 1 to n do
//  if i % 2 = 1 then
//      sum ← sum + 1
//  end if
// end for
// write(sum)

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    for (i = 1; i <= n; i++)
        if (i % 2 != 0)
            sum += 1;

    cout << "Banyak ganjil: " << sum << endl;

    return 0;
}