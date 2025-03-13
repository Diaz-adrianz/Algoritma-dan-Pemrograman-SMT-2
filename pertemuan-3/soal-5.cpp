// tuliskan algoritma yang membanca panjang sebuah benda dalam satuan meter
// menonversinya dalam satuan inchi, kaki, dan yard;

#include <iostream>
#include <cmath>
using namespace std;

double dmod(double x, double y)
{
    return x - (int)(x / y) * y;
}

int main()
{
    double totalMeter, sisaMeter, yard, kaki, inch;

    cout << "Masukkan total meter: ";
    cin >> totalMeter;

    yard = floor(totalMeter / 0.9144);
    sisaMeter = fmod(totalMeter, 0.9144);

    kaki = floor(sisaMeter / 0.3048);
    sisaMeter = fmod(sisaMeter, 0.3048);

    inch = sisaMeter / 0.0254;

    cout << "Hasil konversi: ";
    cout << yard << " yard, " << kaki << " kaki, " << inch << " inch" << endl;

    return 0;
}