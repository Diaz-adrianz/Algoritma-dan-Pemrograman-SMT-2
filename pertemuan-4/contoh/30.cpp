// akar persamaan kuadrat

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, D, x1, x2;

    cout << "Masukkkan nilai a: ";
    cin >> a;
    cout << "Masukkkan nilai b: ";
    cin >> b;
    cout << "Masukkkan nilai c: ";
    cin >> c;

    D = (b * b) - (4 * a * c);

    if (D < 0)
        cout << "Akar-akar persamaan kuadrat imaginer!" << endl;
    else if (D > 0)
    {
        x1 = (b * -1 + sqrt(D)) / (2 * a);
        x2 = (b * -1 - sqrt(D)) / (2 * a);
    }
    else
    {
        x1 = (b * -1 + sqrt(D)) / (2 * a);
        x2 = x1;
    }

    cout << "x1: " << x1 << ", x2: " << x2 << endl;

    return 0;
}