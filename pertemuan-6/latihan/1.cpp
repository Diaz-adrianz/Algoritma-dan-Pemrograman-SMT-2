// Menghitung jumlah N buah bilangan genap pertama

#include <iostream>
using namespace std;

void hitungBilanganGenapPertama(int n, int &sum)
{
    sum = 0;
    for (int i = 0; i < n; i++)
        sum += 2 * i;
}

int main()
{
    int n, sum;

    cout << "Masukkan banyak bilangan: ";
    cin >> n;

    hitungBilanganGenapPertama(n, sum);
    cout << "Jumlah: " << sum << endl;

    return 0;
}