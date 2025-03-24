// Mencetak "genap" jika sebuah bilangan bulat yang dibaca merupakan bilangan genap
// atau "ganjil" jika bilangan tersebut ganjil

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    if (x % 2 == 0)
        cout << "Genap" << endl;
    else
        cout << "Ganjil" << endl;

    return 0;
}