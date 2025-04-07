// Cacah karakter

#include <iostream>
using namespace std;

int main()
{
    char cc;
    int ncc = 0;

    cout << "Masukkan karakter: ";
    cin >> cc;

    while (cc != '.')
    {
        ncc++;
        cout << "Masukkan karakter: ";
        cin >> cc;
    }

    cout << "Jumlah karakter: " << ncc << endl;

    return 0;
}