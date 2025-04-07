// Cetak segitiga

// DEKLARASI
// n, lim, i, j: integer

// ALGORITMA
// n ← 5
// for i ← 1 to n * 2 - 1 do
//  lim ← i
//  if lim > n then
//      lim ← n - (lim - n)
//  end if
//  for j ← 0 to j < lim do
//      write("*")
//  end for
//  write("\n")
// end for

#include <iostream>
using namespace std;

int main()
{
    int n = 5, lim;

    for (int i = 1; i < n * 2; i++)
    {
        lim = i;

        if (lim > n)
            lim = n - (lim - n);

        for (int j = 0; j < lim; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}