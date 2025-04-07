// Menghitung jumlah ganjil

// DEKLARASI
// n, odd, sum, i: integer

// ALGORITMA
// read(n)
// odd ← 1
// sum ← 0
// while i ← 1 do
//  sum ← sum + odd
//  odd ← odd + 2
//  i ← i + 1
// end while
// write(sum)

#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, odd = 1, sum = 0;

    cout << "Masukkan banyak bilangan ganjil pertama: ";
    cin >> n;

    while (i < n)
    {
        sum += odd;
        odd += 2;
        i++;
    }

    cout << "Jumlah: " << sum << endl;

    return 0;
}