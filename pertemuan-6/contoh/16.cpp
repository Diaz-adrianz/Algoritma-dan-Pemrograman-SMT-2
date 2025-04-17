// increment

#include <iostream>
#include "15.cpp"
using namespace std;

int main()
{
    int x = 1;

    while (x <= 10)
    {
        cout << x << endl;
        inc(x);
    }

    return 0;
}