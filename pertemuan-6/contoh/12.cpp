// Tentukan nilai maksimum

#include <iostream>
using namespace std;

void tentukanNilaiMaksimum(int a, int b, int &maks)
{
    if (a > b)
        maks = a;
    else
        maks = b;
}