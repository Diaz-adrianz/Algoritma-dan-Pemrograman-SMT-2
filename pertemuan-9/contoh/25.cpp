// Hitung indeks nilai

#include <iostream>
using namespace std;

void hitungIndeksNilai(int nilUjian[], int n, char *indeksUjian)
{
    for (int i = 0; i < n; i++)
    {
        if (nilUjian[i] >= 80)
            indeksUjian[i] = 'A';
        else if (nilUjian[i] >= 70)
            indeksUjian[i] = 'B';
        else if (nilUjian[i] >= 55)
            indeksUjian[i] = 'C';
        else if (nilUjian[i] >= 45)
            indeksUjian[i] = 'D';
        else
            indeksUjian[i] = 'E';
    }
}