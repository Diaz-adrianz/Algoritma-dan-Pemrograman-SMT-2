// desimal ke biner

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, sisa;
    string biner = "";

    cout << "Masukkan bilangan: ";
    cin >> x;

    do
    {
        sisa = x % 2;
        x = x / 2;

        if (sisa == 0)
            biner += '0';
        else if (sisa == 1)
            biner += '1';
    } while (x != 0);

    cout << "Hasil biner: " << biner << endl;

    return 0;
}