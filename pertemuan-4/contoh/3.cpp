// Menentukan nilai mutlak dari sebuah bilangan riil

#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Masukkan nilai real: ";
    cin >> x;

    if (x < 0)
        x *= -1;

    cout << "Nilai mutlak: " << x << endl;

    return 0;
}