// menentukan kuadran titik P(x, y) di bidang kartesian

#include <iostream>
using namespace std;

struct Titik
{
    float x;
    float y;
};

int main()
{
    Titik p;

    cout << "Masukkan nilai titik x: ";
    cin >> p.x;
    cout << "Masukkan nilai titik y: ";
    cin >> p.y;

    if (p.x > 0 && p.y > 0)
        cout << "Kuadran 1" << endl;
    else if (p.x < 0 && p.y > 0)
        cout << "Kuadran 2" << endl;
    else if (p.x < 0 && p.y < 0)
        cout << "Kuadran 3" << endl;
    else if (p.x > 0 && p.y < 0)
        cout << "Kuadran 4" << endl;
    else
        cout << "Tidak terletak di kuadran manapun" << endl;

    return 0;
}