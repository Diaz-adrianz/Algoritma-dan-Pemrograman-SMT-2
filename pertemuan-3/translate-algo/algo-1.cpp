// Mempertukarkan nilai A dan B
#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    A = 8;
    B = 5;

    cout << "Sebelum pertukaran" << endl;
    cout << "Nilai A: " << A << ", Nilai B: " << B << endl;

    C = A;
    A = B;
    B = C;

    cout << "Setelah pertukaran" << endl;
    cout << "Nilai A: " << A << ", Nilai B: " << B << endl;

    return 0;
}