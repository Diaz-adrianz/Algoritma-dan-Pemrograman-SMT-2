// Hitung rerata dengan larik

#include <iostream>
using namespace std;

int main()
{
    int x[4];
    float jumlah, u;

    for (int i = 0; i < 4; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> x[i];
    }

    jumlah = 0;
    for (int i = 0; i < 4; i++)
        jumlah += x[i];

    u = jumlah / 4;
    cout << "Rerata: " << u << endl;

    return 0;
}