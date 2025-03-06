#include <iostream>
using namespace std;

int main()
{
    int A, B;

    A = 10;
    B = 2 * A - 5;
    A = B;
    A = A + 2;
    B = A + B;

    cout << "Hasil akhir" << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    return 0;
}