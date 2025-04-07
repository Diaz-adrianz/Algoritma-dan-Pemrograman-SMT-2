// perpangkatan

#include <iostream>
using namespace std;

int main()
{
    float a, p = 1;
    int n, i;

    cout << "Masukkan bilangan dan pangkat: ";
    cin >> a >> n;

    for (int i = 1; i <= n; i++)
        p *= a;

    cout << "Hasil: " << p << endl;

    return 0;
}