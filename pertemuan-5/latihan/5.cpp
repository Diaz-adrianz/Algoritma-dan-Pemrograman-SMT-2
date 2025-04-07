// Solusi bilangan bulat tidak negatif

// DEKLARASI
// const result: integer (25)
// x, y, z, count: integer

// ALGORITMA
// result ← 25
// count ← 0
// for x ← 0 to x = result do
//  for y ← 0 to y = result - x do
//      z ← res - x - y
//      write(x, y, z)
//      count ← count + 1
//  end for
// end for
// write(count)

#include <iostream>
using namespace std;

int main()
{
    const int res = 25;
    int x, y, z, count = 0;

    for (x = 0; x <= res; x++)
        for (y = 0; y <= res - x; y++)
        {
            z = res - x - y;
            cout << "(" << x << ", " << y << ", " << z << ")\n";
            count++;
        }

    cout << "Total solusi: " << count << endl;
    return 0;
}