// Hitung rata-rata

#include <iostream>
using namespace std;

int main()
{
    int n, i, x, sum = 0;
    float rerata;

    cout << "Masukkan banyak bilangan: ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> x;
        sum += x;
        i += 1;
    }

    rerata = (float)sum / n;
    cout << "Rata-rata: " << rerata << endl;

    return 0;
}