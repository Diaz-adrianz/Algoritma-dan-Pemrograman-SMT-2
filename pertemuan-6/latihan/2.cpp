// Menghitung rata-rata

#include <iostream>
using namespace std;

void hitungRataRata(float &avg)
{
    float x, sum = 0;
    int n = 0;

    while (true)
    {
        cout << "Masukkan nilai: ";
        cin >> x;
        if (x == 9999)
            break;
        sum += x;
        n++;
    }

    avg = sum / n;
}

int main()
{
    float avg;
    hitungRataRata(avg);
    cout << "Rata-rata: " << avg << endl;
    return 0;
}