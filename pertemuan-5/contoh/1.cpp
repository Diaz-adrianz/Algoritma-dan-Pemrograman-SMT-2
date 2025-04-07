// Cetak banyak hello world

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Masukkan banyak pengulangan: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << "Hello world" << endl;

    return 0;
}