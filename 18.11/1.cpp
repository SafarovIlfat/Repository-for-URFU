#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[] = { -10, 1, 2, 3, 4, 5, 6, 7, -10 };
    int sum = 0;
    int Msum = -999;
    int l = sizeof(a) / 4;
    for (int i = 0; i < l; i++)
    {
        for (int i = i + 1; i < l; i++)
        {
            sum += a[i];
            if (sum > Msum)
            {
                Msum = sum;
            }
            else
            {
                sum = 0;
            }
        }
    }
    cout << Msum;
}