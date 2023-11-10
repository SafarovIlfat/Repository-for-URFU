#include <iostream>
using namespace std;

int first(int n, int k)
{
    int temp = 0;
    int res = 0;
    int pow10 = 0;
    n = abs(n);
    while (n > 0)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
        pow10 += 1;
    }

    if (k > pow10) k = pow10;
    {
        for (int i = 0; i < k; ++i)
        {
            res = res * 10 + temp % 10;
            temp /= 10;
        }
    }
    return res;
}


int main()
{
    int n;
    int k;
    cout << "Число:";
    cin >> n;
    cout << "Сколько разрядов показать:";
    cin >> k;
    cout << first(n, k);
    return 0;
}