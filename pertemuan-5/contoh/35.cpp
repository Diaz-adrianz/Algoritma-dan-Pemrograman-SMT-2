// Perpangkatan 2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, p = 1;
    int n, i;

    cout << "Masukkan bilangan dan pangkat: ";
    cin >> a >> n;

    for (int i = 1; i <= abs(n); i++)
        p *= a;

    if (n < 0)
        cout << "Hasil: " << 1 / p << endl;
    else
        cout << "Hasil: " << p << endl;

    return 0;
}