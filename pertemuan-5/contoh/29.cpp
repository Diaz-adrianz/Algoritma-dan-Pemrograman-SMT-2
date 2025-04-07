// Cari nilai minimum

#include <iostream>
using namespace std;

int main()
{
    int n, x, min, i = 1;

    cout << "Masukkan banyak bilangan: ";
    cin >> n;

    cout << "Masukkan bilangan: ";
    cin >> x;

    min = x;
    do
    {
        cout << "Masukkan bilangan: ";
        cin >> x;
        if (x < min)
            min = x;
        i += 1;
    } while (i < n);

    cout << "Nilai minimum: " << min << endl;

    return 0;
}