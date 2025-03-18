// Titik tengah dari dua buah titik
#include <iostream>
using namespace std;

struct Titik
{
    float x;
    float y;
};

int main()
{
    Titik p1, p2, p3;

    cout << "Titik pertama" << endl;
    cout << "x: ";
    cin >> p1.x;
    cout << "y: ";
    cin >> p1.y;

    cout << "Titik kedua" << endl;
    cout << "x: ";
    cin >> p2.x;
    cout << "y: ";
    cin >> p2.y;

    p3.x = (p1.x + p2.x) / 2;
    p3.y = (p1.y + p2.y) / 2;

    cout << "Titik ketiga" << endl;
    cout << "x: " << p3.x << endl;
    cout << "y: " << p3.y << endl;

    return 0;
}