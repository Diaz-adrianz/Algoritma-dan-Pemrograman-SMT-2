// Penjumlaahn deret

#include <iostream>
using namespace std;

int main()
{
    int x;
    float s = 0;

    cout << "Masukkan bilangan: ";
    cin >> x;

    do
    {
        s = s + (float)1 / x;

        cout << "Masukkan bilangan: ";
        cin >> x;
    } while (x != -1);

    cout << "Jumlah: " << s << endl;

    return 0;
}