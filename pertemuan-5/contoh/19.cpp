// Penjumlahan deret

#include <iostream>
using namespace std;

int main()
{
    int x;
    float s = 0;

    cout << "Masukkan bilangan: ";
    cin >> x;

    while (x != -1)
    {
        s = s + (float)1 / x;

        cout << "Masukkan bilangan: ";
        cin >> x;
    }

    cout << "Jumlah: " << s << endl;

    return 0;
}