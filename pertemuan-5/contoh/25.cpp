// lagu anak ayam

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    cout << "Anak ayam turun " << n << endl;

    for (int i = n; i > 2; i--)
        cout << "Anak ayam turun " << i << " mati satu tinggal " << i - 1 << endl;

    cout << "Anak ayam turun 1, mati satu tinggal induknya" << endl;

    return 0;
}