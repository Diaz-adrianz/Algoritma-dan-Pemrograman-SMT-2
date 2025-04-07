// Validasi password

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string password = "abc123";
    string kataSandi;
    bool sah = false;
    int count = 1;

    while (!sah && count <= 3)
    {
        cout << "Masukkan kata sandi: ";
        cin >> kataSandi;

        if (kataSandi == password)
            sah = true;
        else
            count++;
    }

    return 0;
}