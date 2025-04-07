// Cari nilai minimum

#include <iostream>
using namespace std;

int main()
{
    int x, min;

    cout << "Masukkan bilangan: ";
    cin >> x;

    if (x == -1)
        cout << "Tidak ada data yang dimasukkan" << endl;
    else
    {
        min = x;
        cout << "Masukkan bilangan: ";
        cin >> x;
        while (x != -1)
        {
            if (x < min)
                min = x;
            cout << "Masukkan bilangan: ";
            cin >> x;
        }

        cout << "Nilai minimum: " << min << endl;
    }

    return 0;
}