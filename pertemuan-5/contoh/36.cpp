// Faktorial

#include <iostream>
using namespace std;

int main()
{
    int n, fak = 1, i;

    cout << "Masukkan bilangan: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        fak *= i;

    cout << "Hasil: " << fak << endl;

    return 0;
}