// Hitung rata-rata

#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n, x;
    float rerata;

    cout << "Masukkan banyak perulangan: ";
    cin >> n;

    do
    {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> x;
        sum += x;
        i += 1;
    } while (i <= n);

    rerata = (float)sum / n;
    cout << "Rata-rata: " << rerata << endl;

    return 0;
}