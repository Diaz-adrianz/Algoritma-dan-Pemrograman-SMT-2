// Menentukan wujud air: padat, cair, atau gas, bergantung pada suhunya

#include <iostream>
using namespace std;

int main()
{
    float t;

    cout << "Masukkan nilai suhu air: ";
    cin >> t;

    if (t <= 0)
        cout << "Wujud padat" << endl;
    else
    {
        if (t > 0 && t < 100)
            cout << "Wujud cair" << endl;
        else if (t >= 100)
            cout << "Wujud gas" << endl;
    }

    return 0;
}