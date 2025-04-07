// Hitung rata-rata

#include <iostream>
using namespace std;

int main()
{
    int n, x, sum = 0;
    float rerata;

    cout << "Masukkan banyak bilangan: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan bilangan: ";
        cin >> x;
        sum += x;
    }

    rerata = (float)sum / n;
    cout << "Rata-rata: " << rerata << endl;

    return 0;
}