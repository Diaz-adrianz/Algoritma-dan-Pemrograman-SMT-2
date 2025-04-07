// jumlah bilangan genap

#include <iostream>
using namespace std;

int main()
{
    int x, nx = 0;

    cout << "Masukkan bilangan: ";
    cin >> x;

    while (x != -1)
    {
        if (x % 2 == 0)
            nx++;

        cout << "Masukkan bilangan: ";
        cin >> x;
    }

    cout << "Banyak bilangan genap: " << nx << endl;

    return 0;
}