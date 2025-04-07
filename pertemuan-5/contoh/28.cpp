// cari minimum

#include <iostream>
using namespace std;

int main()
{
    int n, x, min, i;

    cout << "Masukkan banyak bilangan: ";
    cin >> n;

    cout << "Masukkan bilangan: ";
    cin >> x;

    min = x;
    for (int i = 2; i <= n; i++)
    {
        cout << "Masukkan bilangan: ";
        cin >> x;
        if (x < min)
            min = x;
    }

    cout << "Nilai minimum: " << min << endl;

    return 0;
}