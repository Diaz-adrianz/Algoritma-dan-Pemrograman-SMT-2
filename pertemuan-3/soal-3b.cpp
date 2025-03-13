// dibaca tiga buah bilangan bulat x, y, z
// Tulis algoritma untuk mempertukarkan triper x y z menjadi y z x

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Masukkan angka x: ";
    cin >> x;
    cout << "Masukkan angka y: ";
    cin >> y;
    cout << "Masukkan angka z: ";
    cin >> z;

    int tempX = x;
    x = y;
    y = z;
    z = tempX;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}