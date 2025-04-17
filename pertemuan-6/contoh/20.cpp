// jam hidup 2

#include <iostream>
#include "18.cpp"
using namespace std;

int main()
{
    Jam j;

    cout << "Masukkan jam (jam, menit, detik): ";
    cin >> j.hh >> j.mm >> j.ss;

    while (true)
    {
        cout << j.hh << ":" << j.mm << ":" << j.ss << endl;
        jamBerikutnya(j);
    }

    return 0;
}