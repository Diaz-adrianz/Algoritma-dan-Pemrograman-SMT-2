// Menentukan apakah sebuah bilangan bulat merupakan bilangan positif, negatif, atau nol

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    if (x > 0)
        cout << "Positif" << endl;
    else
    {
        if (x < 0)
            cout << "Negatif" << endl;
        else if (x == 0)
            cout << "Nol" << endl;
    }

    return 0;
}