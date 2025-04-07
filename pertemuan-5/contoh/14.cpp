// Cetak banyak hello world

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    do
    {
        cout << "Hello world" << endl;
        i += 1;
    } while (i > n);

    return 0;
}