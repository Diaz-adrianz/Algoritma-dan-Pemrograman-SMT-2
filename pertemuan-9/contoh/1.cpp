// Hitung rerata tanpa larik

#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    float u;

    cout << "Masukkan 4 nilai: ";
    cin >> x1 >> x2 >> x3 >> x4;

    cout << "Nilai: " << x1 << ", " << x2 << ", " << x3 << ", " << x4 << endl;

    u = (x1 + x2 + x3 + x4) / 4.0;
    cout << "Rerata: " << u << endl;

    return 0;
}