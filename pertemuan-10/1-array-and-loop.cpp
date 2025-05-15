#include <iostream>
using namespace std;

int main()
{
    int angka[100];

    for (int i = 0; i < 100; i++)
    {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    for (int i = 0; i <= 99; i++)
        cout << "Angka ke-" << i + 1 << ": " << angka[i];

    return 0;
}