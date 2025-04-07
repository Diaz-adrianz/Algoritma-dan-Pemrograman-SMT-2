// Cetak banyak hello world

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        cout << "Hello world" << endl;
        i += 1;
    }

    return 0;
}