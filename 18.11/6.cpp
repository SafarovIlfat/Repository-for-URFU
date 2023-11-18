#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long r;
    cout << "r=";
    cin >> r;
    long long c;
    for (long long i = 0; i < r; i++)
    {
        c += ceil(sqrt(r * r - i * i));
    }
    cout << c * 4;
    return 0;
}
