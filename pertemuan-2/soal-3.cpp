// Tuliskan rumus dalam notasi algoritmik
#include <cmath>
#include <iostream>
using namespace std;

float rumusA(float r)
{
    const float PHI = 3.14;
    float V = (4.0f / 3.0f) * PHI * pow(r, 3);
    return V;
}

float rumusB(float a, float b, float c)
{
    float x = ((b * -1) + (2 * pow(c, 2)) + (4 * a * b)) / (2 * c);
    return x;
}

float rumusC(float a, float b, float c, float d)
{
    float m = ((a - b) / (3 * a * c)) * (1 - (b / (c * d)));
    return m;
}

int main()
{
    float hasilRumusA = rumusA(5);
    float hasilRumusB = rumusB(7, 8, 5);
    float hasilRumusC = rumusC(1, 2, 3, 4);

    cout << "Hasil rumus A: " << hasilRumusA << endl;
    cout << "Hasil rumus B: " << hasilRumusB << endl;
    cout << "Hasil rumus C: " << hasilRumusC << endl;

    return 0;
}