// Menentukan apakah suatu tahun merupakan kabisat atau bukan

#include <iostream>
using namespace std;

int main()
{
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun % 4 == 0)
        cout << "Tahun kabisat" << endl;
    else
        cout << "Bukan tahun kabisat" << endl;

    return 0;
}