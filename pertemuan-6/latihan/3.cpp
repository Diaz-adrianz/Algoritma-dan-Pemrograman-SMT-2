// Nilai terkecil

#include <iostream>
using namespace std;

void nilaiTerkecil(float &min)
{
    float x;
    bool first;

    while (true)
    {
        cout << "Masukkan nilai: ";
        cin >> x;
        if (x == 9999)
            break;

        if (first)
        {
            min = x;
            first = false;
        }
        else if (x < min)
            min = x;
    }
}

int main()
{
    float min;
    nilaiTerkecil(min);
    cout << "Rata-rata: " << min << endl;
    return 0;
}