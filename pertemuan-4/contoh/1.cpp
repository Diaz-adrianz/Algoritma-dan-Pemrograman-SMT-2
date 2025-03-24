// Mencetak pesan "bilangan genap" jika bilangan bulat yang di-inputkan merupakan bilangan genap

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Masukkan bilangan: ";
    cin >> x;

    if (x % 2 == 0)
        cout << "Genap" << endl;

    return 0;
}